/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:33:58 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/08 09:41:45 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		k = 0;
		while ((str[i + k] == to_find[k]) && str[i + k] != '\0'
			&& to_find[k] != '\0')
			k++;
		if (to_find[k] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
