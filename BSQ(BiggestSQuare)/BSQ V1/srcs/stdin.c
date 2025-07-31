/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 13:17:16 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 13:51:56 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int	stdin_first_line_check(char **first_line)
{
	int		fd;
	char	empty;

	fd = 0;
	*first_line = isolate_first_line(fd);
	empty = (*first_line)[ft_strlen(*first_line) - 3];
	if ((empty >= '0' && empty <= '9') || ft_strict_atoi(*first_line) <= 0)
		return (-1);
	else
		return (0);
}

char	**ft_stdin_file(int file_open, unsigned long mapsize)
{
	int		bytestock;
	char	*buff;
	char	**result;
	char	*len;
	int		len_len;

	len = isolate_first_line(file_open);
	len_len = ft_strlen(len);
	if (len_len <= 1)
		return (big_free(len));
	mapsize = mapsize * len_len + 1;
	buff = (char *) malloc (sizeof(char) * mapsize);
	ft_strcpy(buff, len);
	bytestock = read(0, len, len_len);
	while (bytestock > 0)
	{
		len[bytestock] = '\0';
		ft_strcat(buff, len);
		bytestock = read(0, len, len_len);
	}
	free(len);
	result = ft_split(buff, "\n");
	free(buff);
	return (result);
}

int	stdin_validity_checker(char ***map, t_map_params **params)
{
	char	*first_line;
	int		fd;

	fd = stdin_first_line_check(&first_line);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		free(first_line);
		return (0);
	}
	*params = param_filler(first_line);
	*map = ft_stdin_file(fd, ft_strict_atoi(first_line));
	if (map == NULL || ft_nprint_param(*params)
		|| !ft_map_equal(*map, (*params)->obst, (*params)->empty))
	{
		write(2, "map error\n", 10);
		free(first_line);
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

int	ft_nprint_param(t_map_params *params)
{
	if (params->empty < 32 || params->empty == 127)
		return (1);
	if (params->full < 32 || params->full == 127)
		return (1);
	if (params->obst < 32 || params->obst == 127)
		return (1);
	return (0);
}
