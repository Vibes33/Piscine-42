/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:05:04 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 11:05:24 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int	min(int a, int b, int c)
{
	int	f;

	f = a;
	if (f > b)
		f = b;
	if (f > c)
		f = c;
	return (f);
}

void	ft_fill_square(char **map, t_square *square, t_map_params *param)
{
	int	x;
	int	y;
	int	start_x;
	int	start_y;

	start_x = square->x - square->size + 1;
	start_y = square->y - square->size + 1;
	y = start_y;
	while (y <= square->y)
	{
		x = start_x;
		while (x <= square->x)
		{
			map[x][y] = param->full;
			x++;
		}
		y++;
	}
}

void	ft_switch_best(t_square *best, int current, t_cords coords)
{
	best->size = current;
	best->x = coords.y;
	best->y = coords.x;
}
