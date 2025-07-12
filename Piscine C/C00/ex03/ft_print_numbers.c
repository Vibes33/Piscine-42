/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:15:17 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/10 14:45:29 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	hello;

	hello = '0';
	while (hello <= '9')
	{
		write(1, &hello, 1);
		hello++;
	}
}

int main (void) 
{
	ft_print_numbers();
}
