/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:18:13 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/17 15:24:32 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_read(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i++], 1);
	}
}

int main (int argc, char **argv)
{
	int i;
	
	i = 0;
	while(i++ < argc)
	{
		ft_read(argv[argc - i]);
		write(1, "\n", 1);
	}
	return (0);
}
