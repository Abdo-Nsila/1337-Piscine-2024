/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:27:16 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/28 00:46:56 by abnsila          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb()
{
    int d1, d2, d3;

    d1 = 0;

    while (d1 <= 7)
    {
        d2 = d1 + 1;

        while (d2 <= 8)
        {
            d3 = d2 + 1;

            while (d3 <= 9)
            {
                ft_putchar(d1 + 48);
                ft_putchar(d2 + 48);
                ft_putchar(d3 + 48);

                if (d1 + d2 + d3 != 24)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                d3++;
            }
            d2++;
        }
        d1++;
    }
    return 0;
}
