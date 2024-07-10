/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:40:13 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/10 11:40:21 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fct;

	fct = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fct *= nb;
		nb--;
	}
	return (fct);
}
