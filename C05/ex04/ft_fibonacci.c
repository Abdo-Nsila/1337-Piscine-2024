/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:43:34 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/10 11:43:43 by abnsila          ###   ########.fr       */
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
