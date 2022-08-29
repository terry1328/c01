/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:34:35 by cholee            #+#    #+#             */
/*   Updated: 2022/08/25 21:50:14 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_ultimate_div_mod(int *a, int *b);
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("New Replace of a after a divide b =  %d\n", a);
	printf("New Replace of b after a modulus b = %d\n", b);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	div = (tempa / tempb);
	mod = (tempa % tempb);
	*a = div;
	*b = mod;
}
