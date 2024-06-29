/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:19:34 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/29 10:06:46 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	two1;
	int	two2;

	two1 = -1;
	while (++two1 <= 98)
	{
		two2 = two1;
		while (++two2 <= 99)
		{
			ft_putchar(two1 / 10 + '0');
			ft_putchar(two1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(two2 / 10 + '0');
			ft_putchar(two2 % 10 + '0');
			if (!(two1 == 98 && two2 == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
