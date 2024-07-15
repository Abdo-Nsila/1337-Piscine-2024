/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:10:17 by kamado            #+#    #+#             */
/*   Updated: 2024/07/14 13:45:18 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *) malloc ((max - min) * 4);
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	while ((min + i) < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (max - min);
}
