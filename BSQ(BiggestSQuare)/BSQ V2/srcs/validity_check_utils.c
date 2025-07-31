/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity_check_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:58:20 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/30 22:36:40 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

char	*isolate_first_line(int fd)
{
	char	buffer[2];
	char	*first_line;
	char	*tmp;
	int		size_read;

	tmp = NULL;
	first_line = malloc(sizeof(char) * 2);
	if (!first_line)
		return (NULL);
	size_read = read(fd, first_line, 1);
	first_line[size_read] = '\0';
	while (size_read == 1 && first_line[ft_strlen(first_line) - 1] != '\n')
	{
		size_read = read(fd, buffer, 1);
		buffer[size_read] = '\0';
		tmp = malloc(sizeof(char) * (ft_strlen(first_line) + 2));
		tmp[0] = '\0';
		ft_strcat(tmp, first_line);
		ft_strcat(tmp, buffer);
		free(first_line);
		first_line = tmp;
	}
	return (first_line);
}

char	**ft_file(int file_open, int size)
{
	char	*buff;
	char	**result;

	buff = store_file(file_open);
	if (!buff)
		return (NULL);
	close(file_open);
	result = ft_split(buff, "\n", size);
	free(buff);
	return (result);
}

int	ft_mapcontent(char **map, char obstacle, char void_indic)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] != obstacle && map[i][j] != void_indic)
				return (0);
			else
				j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_map_equal(char **map, char obstacle, char void_indic)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (map[0][j])
		j++;
	while (map[i])
	{
		if (ft_strlen(map[i]) != j)
			return (0);
		i ++;
	}
	if (!(ft_mapcontent(map, obstacle, void_indic)))
		return (0);
	return (1);
}

int	first_line_check(char *file_name, char **first_line)
{
	int		fd;
	int		i;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (-1);
	*first_line = isolate_first_line(fd);
	if (!(*first_line))
		return (-1);
	while ((*first_line)[i] >= '0' && (*first_line)[i] <= '9')
		i++;
	if (ft_strlen(*first_line) != i + 4)
		return (-1);
	return (fd);
}
