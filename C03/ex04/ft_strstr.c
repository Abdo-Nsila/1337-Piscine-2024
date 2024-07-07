/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:33:58 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/03 15:02:40 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while ((str[i + j] == to_find[j]) && str[i + j] != '\0'
			&& to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
