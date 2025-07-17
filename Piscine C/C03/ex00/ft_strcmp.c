/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:15:25 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/15 10:00:30 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
//#include <stdio.h>
//
//int	main(void)
//{
//	char str1[] = "aaA";
//	char str2[] = "aaB";
//	int	actual = ft_strcmp(str1, str2);
//	int	computed = ft_strcmp(str1, str2);
//
//	printf("Test 0 | Actual : %d | Computed : %d\n", actual, computed);
//	return (0);
//}
