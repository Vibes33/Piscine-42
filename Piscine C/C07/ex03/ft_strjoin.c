/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:07:56 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/23 16:23:56 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_lngt(int size, char **strs, char *sep)
{
	int	total_lgt;
	int	i;

	total_lgt = 0;
	i = 0;
	while (i < size)
	{
		total_lgt += ft_strlen(strs[i]);
		i++;
	}
	total_lgt += ft_strlen(sep) * (size - 1);
	return (total_lgt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	len = total_lngt(size, strs, sep);
	result = malloc(sizeof(char) *(len + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
//#include <stdio.h>
//int main (void)
//{
//	char *strs[4]= {"hello", "hi", "안녕하세요", "halo"};
//	char *sep = "-";
//	char *result;
//
//	result = ft_strjoin(4,strs,sep);
//	printf("%s",result);
//	free(result);
//	return(0);
//}
