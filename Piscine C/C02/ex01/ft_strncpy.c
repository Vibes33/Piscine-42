/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:22:15 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/10 15:30:51 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int    i;

	i = 0; 
	while(str[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest = '\0';
		i++;
	}
	return(dest);
}
