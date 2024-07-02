/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:42:27 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/02 12:01:11 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;
	char hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

	i = 0;
	while (str[i] != '\0') 
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			ft_putchar((int)hex[str[i] / 16]);
			ft_putchar((int)hex[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
