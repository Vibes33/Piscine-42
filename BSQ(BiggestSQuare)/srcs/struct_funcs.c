/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:36:06 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 09:38:37 by rdestruh         ###   ########.fr       */
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
