/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:24:48 by cholee            #+#    #+#             */
/*   Updated: 2022/08/29 16:14:59 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	while (size >= 0)
	{
		x = 0;
		while (x < size -1)
		{
			if (tab[x] > tab[x + 1])
			{
				y = tab[x];
				tab [x] = tab [x + 1];
				tab [x + 1] = y;
			}
			x++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[] = {5, 7, 3, 4, 1};
	int	size = 5;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
