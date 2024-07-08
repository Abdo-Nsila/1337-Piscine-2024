/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:39:59 by kamado            #+#    #+#             */
/*   Updated: 2024/07/08 15:15:26 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_power;

	i = 0;
	nb_power = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		nb_power *= nb;
		i++;
	}
	return (nb_power);
}
