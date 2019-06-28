/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 09:03:10 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/28 13:28:21 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int			ft_new_line(char **str, char **new_line, int fd, int bytes)
{
	char	*temp;
	int		size;

	size = 0;
	while (str[fd][size] != '\n' && str[fd][size] != '\0')
		size++;
	if (str[fd][size] == '\n')
	{
		*new_line = ft_strsub(str[fd], 0, size);
		temp = ft_strdup(str[fd] + size + 1);
		free(str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][size] == '\0')
	{
		if (bytes == BUFF_SIZE)
			return (get_next_line(fd, new_line));
		*new_line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char	*str[255];
	char		buff[BUFF_SIZE + 1];
	char		*temp;
	int			bytes;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((bytes = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bytes] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break;
	}
	if (bytes < 0)
		return (-1);
	else if (bytes == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (ft_new_line(str, line,fd, bytes));
}
