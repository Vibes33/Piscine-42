/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:17:16 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/30 22:36:37 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

char	*store_file(int fd)
{
	char	buffer[11];
	char	*file_buffer;
	char	*tmp;
	int		size_read;

	tmp = NULL;
	file_buffer = malloc(sizeof(char) * 11);
	if (!file_buffer)
		return (NULL);
	size_read = read(fd, file_buffer, 10);
	file_buffer[size_read] = '\0';
	while (size_read > 0)
	{
		size_read = read(fd, buffer, 10);
		buffer[size_read] = '\0';
		tmp = malloc(sizeof(char) * (ft_strlen(file_buffer) + 11));
		if (!tmp)
			return (malloc_error(&file_buffer));
		tmp[0] = '\0';
		ft_strcat(tmp, file_buffer);
		ft_strcat(tmp, buffer);
		free(file_buffer);
		file_buffer = tmp;
	}
	return (file_buffer);
}

int	stdin_first_line_check(char **first_line)
{
	int		i;

	i = 0;
	*first_line = isolate_first_line(0);
	if (!(*first_line))
		return (-1);
	while ((*first_line)[i] >= '0' && (*first_line)[i] <= '9')
		i++;
	if (ft_strlen(*first_line) != i + 4)
		return (-1);
	return (0);
}

char	**ft_stdin_file(int file_open, unsigned long size)
{
	char	*buff;
	char	**result;

	buff = store_file(file_open);
	if (!buff)
		return (NULL);
	result = ft_split(buff, "\n", size);
	free(buff);
	return (result);
}

int	stdin_validity_checker(char ***map, t_map_params **params)
{
	char	*first_line;
	int		fd;

	first_line = NULL;
	fd = stdin_check(params, &first_line);
	if (fd == -1)
		return (0);
	*map = ft_stdin_file(fd, ft_strict_atoi(first_line));
	if (*map == NULL || ft_nprint_param(*params)
		|| !ft_map_equal(*map, (*params)->obst, (*params)->empty))
	{
		write(2, "map error\n", 10);
		free(first_line);
		if (*map != NULL)
			big_big_free(*map, (*params)->size);
		free(*params);
		return (0);
	}
	free(first_line);
	return (1);
}

int	stdin_handler(void)
{
	char			**map;
	t_map_params	*params;
	t_map			*map_all;

	if (stdin_validity_checker(&map, &params))
	{
		map_all = ft_map_assign(map);
		ft_algo(map_all, params);
		mass_print(map_all->map, params->size);
		big_big_free(map, params->size);
		free(params);
		free(map_all);
	}
	else
		return (1);
	return (0);
}
