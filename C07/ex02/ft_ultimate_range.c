/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:56:56 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/15 15:57:04 by abnsila          ###   ########.fr       */
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