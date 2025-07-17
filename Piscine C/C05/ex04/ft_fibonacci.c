/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:20:05 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/16 10:28:23 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index == 0)
	{
		return(0);
	}
	if (index < 0)
	{
		return(-1);
	}
	if (index == 1)
	{
		return(1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
