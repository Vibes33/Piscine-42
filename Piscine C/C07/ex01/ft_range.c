/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:41:03 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/22 14:28:12 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (min >= max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}

//#include <stdio.h>
//
//int main (void)
//{
//	int *tab;
//	int i = 0;
//
//	tab = ft_range(2,10);
//	while(i < 8)
//	{
//		printf("%d", tab[i]);
//		i++;
//	}
//	free(tab);
//	return(0);
//
//}
