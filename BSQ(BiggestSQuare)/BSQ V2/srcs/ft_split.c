/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestruh <rdestruh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:35:33 by rdestruh          #+#    #+#             */
/*   Updated: 2025/07/30 22:30:25 by rdestruh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/includes.h"

int	ft_is_in_charset(char chr, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (chr == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_counter(char *str, char *charset)
{
	int	word_count;
	int	i;

	word_count = 0;
	i = 0;
	while (ft_is_in_charset(str[i], charset) && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (!ft_is_in_charset(str[i], charset) && str[i] != '\0')
			i++;
		word_count++;
		while (ft_is_in_charset(str[i], charset) && str[i] != '\0')
			i++;
	}
	return (word_count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

char	**ft_split_main(char *str, char **result, char *charset)
{
	int	current_word;
	int	i;
	int	len;

	current_word = 0;
	i = 0;
	len = 0;
	while (ft_is_in_charset(str[i], charset) && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (!ft_is_in_charset(str[i + len], charset) && str[i + len] != '\0')
			len++;
		result[current_word] = malloc(sizeof(char) * (len + 1));
		if (!result[current_word])
			return (NULL);
		ft_strlcpy(result[current_word], &str[i], len + 1);
		current_word++;
		i += len;
		len = 0;
		while (ft_is_in_charset(str[i], charset) && str[i] != '\0')
			i++;
	}
	return (result);
}

char	**ft_split(char *str, char *charset, int size)
{
	int		word_count;
	char	**result;

	word_count = ft_word_counter(str, charset);
	if (word_count != size)
		return (NULL);
	result = malloc(sizeof(char *) * (word_count + 1));
	result[word_count] = NULL;
	return (ft_split_main(str, result, charset));
}
