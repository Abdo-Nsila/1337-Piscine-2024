/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:44:04 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/10 11:44:14 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_sqrt(int nb, int start, int end)
{
	long	mid;
	long	mid_sqrt;

	if (start > end)
		return (0);
	mid = start + (end - start) / 2;
	mid_sqrt = mid * mid;
	if (mid_sqrt == nb)
		return (mid);
	else if (mid_sqrt < nb)
		return (ft_find_sqrt(nb, mid + 1, end));
	else
		return (ft_find_sqrt(nb, start, mid - 1));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (ft_find_sqrt(nb, 1, nb / 2));
}
