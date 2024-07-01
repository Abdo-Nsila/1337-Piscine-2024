/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:36:51 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/30 18:39:20 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int index;

	index = 0;
	if (str[index] == '\0' )
	{
		return (1);
	}

	while (str[index] != '\0')
	{
		if ((str[index] >= '0' && str [index] <= '9'))
			index++;
		else
		{
			return (0);
		}
	}
	return (1);
}
