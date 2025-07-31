/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 09:42:31 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/29 11:04:33 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_square
{
	int	size;
	int	x;
	int	y;
}	t_square;

typedef struct s_map_params
{
	int		size;
	char	empty;
	char	obst;
	char	full;
}	t_map_params;

typedef struct s_map
{
	char	**map;
	int		line;
	int		col;
}	t_map;

typedef struct s_cords
{
	int	x;
	int	y;

}	t_cords;

#endif