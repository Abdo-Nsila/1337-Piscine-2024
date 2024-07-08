/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:09:34 by kamado            #+#    #+#             */
/*   Updated: 2024/07/08 15:12:22 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_fibonacci(int prev1, int prev2, int index)
{
	if (index < 0)
		return (prev1);
	return (ft_recursive_fibonacci(prev1 + prev2, prev1, index - 1));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_recursive_fibonacci(1, 0, index - 2));
}
