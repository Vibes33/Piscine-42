/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:02:08 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 13:52:10 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

t_map_params	*param_filler(char *first_line)
{
	t_map_params	*params;

	params = malloc(sizeof(t_map_params));
	params->size = ft_strict_atoi(first_line);
	params->empty = first_line[ft_strlen(first_line) - 4];
	params->obst = first_line[ft_strlen(first_line) - 3];
	params->full = first_line[ft_strlen(first_line) - 2];
	return (params);
}

struct s_map	*ft_map_assign(char **map)
{
	t_map	*return_map;
	int		i;
	int		j;

	i = 0;
	j = 0;
	return_map = malloc(sizeof(t_map));
	return_map->map = map;
	while (return_map->map[i])
		i++;
	while (return_map->map[0][j])
		j++;
	return_map->col = j;
	return_map->line = i;
	return (return_map);
}

int	validity_checker(char *file_name, char ***map, t_map_params **params)
{
	char	*first_line;
	int		fd;

	fd = first_line_check(file_name, &first_line);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		free(first_line);
		return (0);
	}
	*params = param_filler(first_line);
	*map = ft_file(fd, ft_strict_atoi(first_line));
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

void	mass_print(char	**map, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		ft_putstr(map[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	char			**map;
	t_map_params	*params;
	t_map			*map_all;
	int				i;

	i = 1;
	params = NULL;
	if (argc == 1)
		return (stdin_handler());
	while (i < argc)
	{
		if (validity_checker(argv[i], &map, &params))
		{
			map_all = ft_map_assign(map);
			ft_algo(map_all, params);
			mass_print(map_all->map, params->size);
			big_big_free(map, params->size);
			free(params);
			free(map_all);
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}
