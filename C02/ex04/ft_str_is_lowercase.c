/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:43:15 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/30 18:47:04 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int index;

	index = 0;
	if (str[index] == '\0' )
	{
		return (1);
	}

	while (str[index] != '\0')
	{
		if ((str[index] >= 'a' && str[index] <= 'z'))
			index++;
		else
		{
			return (0);
		}
	}
	return (1);
}
