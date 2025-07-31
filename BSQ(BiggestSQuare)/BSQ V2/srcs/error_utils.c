/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 12:43:53 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/30 22:45:50 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

char	**invalid_len(char *len)
{
	if (len)
		free(len);
	return (NULL);
}

int	return_error(char *first_line)
{
	write(2, "map error\n", 10);
	free(first_line);
	return (-1);
}

int	fd_check(char *file_name, t_map_params **params, char **first_line)
{
	int	fd;

	fd = first_line_check(file_name, first_line);
	if (fd == -1)
		return (return_error(*first_line));
	*params = param_filler(*first_line);
	if (!(*params))
		return (return_error(*first_line));
	return (fd);
}

int	stdin_check(t_map_params **params, char **first_line)
{
	int	fd;

	fd = stdin_first_line_check(first_line);
	if (fd == -1)
	{
		write(2, "map error\n", 10);
		free(first_line);
		return (0);
	}
	*params = param_filler(*first_line);
	if (!(*params))
	{
		write(2, "map error\n", 10);
		free(first_line);
		return (0);
	}
	return (fd);
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
