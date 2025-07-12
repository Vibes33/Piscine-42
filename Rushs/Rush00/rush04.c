/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rydelepi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 16:14:56 by rydelepi          #+#    #+#             */
/*   Updated: 2025/07/12 16:36:18 by rydelepi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	tab(int x, int y, int ligne, int colonne)
{
	if (ligne == 0 && colonne == 0)
		ft_putchar('A');
	else if (ligne == 0 && colonne == y - 1)
		ft_putchar('C');
	else if (ligne == x -1 && colonne == 0)
		ft_putchar('C');
	else if (ligne == x -1 && colonne == y -1)
		ft_putchar('A');
	else if (ligne != 0 && colonne != y - 1 && ligne != x -1 && colonne != 0)
		ft_putchar(' ');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	ligne;
	int	colonne;

	colonne = 0;
	ligne = 0;
	while (ligne < x)
	{
		while (colonne < y)
		{
			tab(x, y, ligne, colonne);
			colonne++;
		}
		ligne++;
		ft_putchar('\n');
		colonne = 0;
	}
}
