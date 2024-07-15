/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:20:29 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/14 13:40:00 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = (int *) malloc ((max - min) * 4);
	if (ptr == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while ((min + 1) >= min && (min + i) < max)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
