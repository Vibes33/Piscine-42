/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 11:18:47 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/15 17:13:05 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	d;

	c = 0;
	d = 0;
	while (dest[c])
	{
		c++;
	}
	while (src[d] && d < nb)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (dest);
}
//int main(void)
//{
//	char dest[100] = "bonjour";
//	char src[] = "comment ca va ?";
//	unsigned int nb = 3;
//	printf("avant : %s \n",dest);
//	ft_strncat(dest,src,nb);
//	printf("apres : %s \n",dest);
//	return(0);
//
//}
