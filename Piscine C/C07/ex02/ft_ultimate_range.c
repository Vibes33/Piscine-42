/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:33:00 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/23 16:18:40 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min > max)
	{
		return (0);
	}
	if (*range == NULL)
	{
		return (-1);
	}
	*range = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
//#include <stdio.h>
//
//int	main(void)
//{
//	int *p;
//	int i = 0;
//	int size;
//	
//	size = ft_ultimate_range(&p , 0, 9);
//	printf("taille du tab : %d \n", size);
//	if (size <= 0)
//	{
//		return (1);
//	}
//	while(i < size)
//	{
//		i++;
//		printf("%d",i);
//	}
//	free(p);
//	return (0);
//}
