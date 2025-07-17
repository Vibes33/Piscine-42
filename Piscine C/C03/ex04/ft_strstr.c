/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:26:07 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/15 10:09:57 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	d;

	c = 0;
	d = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[c])
	{
		while (str[c + d] == to_find[d])
		{
			if (to_find[d + 1] == '\0')
			{
				return (&str[c]);
			}
			d++;
		}
		d = 0;
		c++;
	}
	return (0);
}
//int main (void)
//{
//char str[] = "ceci est une chaine de caractere";
//char to_find[] = "chaine";
//char *result = ft_strstr(str,to_find);
//
//if (result != NULL )
//{
//	printf("resultat : %s \n",result);
//}
//else
//{
//	printf("mot non trouve \n");
//}
//return(0);
//}
