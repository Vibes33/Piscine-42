/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 10:04:22 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 11:06:27 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int	**ft_algo_inits(t_square *best, int **previous, int **current, int col)
{
	int	**res;

	best->x = 0;
	best->y = 0;
	best->size = 0;
	res = malloc(sizeof(int *) * 2);
	*previous = malloc(sizeof(int) * col);
	*current = malloc(sizeof(int) * col);
	res[0] = *previous;
	res[1] = *current;
	return (res);
}

void	ft_algo_swap(int **previous, int **current)
{
	int	*swap;

	swap = *previous;
	*previous = *current;
	*current = swap;
}

int	ft_algo_checks(t_map *all, t_map_params *param, t_cords coords,
int **prevcur)
{
	int	res;

	if (all->map[coords.y][coords.x] == param->obst)
		res = 0;
	else if (coords.y == 0 || coords.x == 0)
		res = 1;
	else
		res = 1 + min (prevcur[0][coords.x], prevcur[1][coords.x - 1],
				prevcur[0][coords.x - 1]);
	return (res);
}

void	ft_algo(t_map *all, t_map_params *param)
{
	int			*previous;
	int			*current;
	int			**prevcur;
	t_cords		coords;
	t_square	best;

	prevcur = ft_algo_inits(&best, &previous, &current, all->col);
	coords.y = 0;
	while (coords.y < all->line)
	{
		coords.x = 0;
		while (coords.x < all->col)
		{
			prevcur[1][coords.x] = ft_algo_checks(all, param, coords, prevcur);
			if (prevcur[1][coords.x] > best.size)
				ft_switch_best(&best, prevcur[1][coords.x], coords);
			coords.x++;
		}
		ft_algo_swap(&prevcur[0], &prevcur[1]);
		coords.y++;
	}
	ft_fill_square(all->map, &best, param);
	free(current);
	free(previous);
	free(prevcur);
}
