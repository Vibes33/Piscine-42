/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:16:57 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/16 10:19:44 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return(0);
	if (nb == 0)
		return(1);
	else
		return(nb * ft_recursive_power(nb , --power);
}
