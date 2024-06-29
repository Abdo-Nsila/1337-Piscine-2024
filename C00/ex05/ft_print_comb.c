/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:41:30 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/28 12:42:41 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(int d1, int d2, int d3)
{
	ft_putchar(d1 + 48);
	ft_putchar(d2 + 48);
	ft_putchar(d3 + 48);
	if (d1 + d2 + d3 != 24)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	d1;
	int	d2;
	int	d3;

	d1 = 0;
	while (d1 <= 7)
	{
		d2 = d1 + 1;
		while (d2 <= 8)
		{
			d3 = d2 + 1;
			while (d3 <= 9)
			{
				ft_putcomb(d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
