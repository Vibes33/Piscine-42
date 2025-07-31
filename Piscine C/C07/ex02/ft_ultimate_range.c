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

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
        i++;
	}
	return (max - min);
}

//#include <stdio.h>
//
//int main()
//{
//    int *p;
//int i;
//
//    i = ft_ultimate_range(&p, 0, 20);
//    printf("%d\n", i);
//    while (i > 0)
//    {
//        printf("%d ", *p);
//        p++;
//        i--;
//   }
//    free(p);
//}
