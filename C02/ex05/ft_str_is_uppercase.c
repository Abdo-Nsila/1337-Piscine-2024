/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:47:57 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/02 14:59:04 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	if (str[index] == '\0' )
	{
		return (1);
	}
	while (str[index] != '\0')
	{
		if ((str[index] >= 'A' && str[index] <= 'Z'))
			index++;
		else
		{
			return (0);
		}
	}
	return (1);
}
