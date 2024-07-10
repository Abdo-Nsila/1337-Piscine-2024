/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:41:18 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/10 11:42:43 by abnsila          ###   ########.fr       */
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
