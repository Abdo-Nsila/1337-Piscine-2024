/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:18:10 by kamado            #+#    #+#             */
/*   Updated: 2024/07/08 13:38:48 by kamado           ###   ########.fr       */
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
