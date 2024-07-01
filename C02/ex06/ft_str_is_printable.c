/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 18:52:34 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/01 11:53:44 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int index;

	index = 0;
	if (str[index] == '\0' )
	{
		return (1);
	}

	while (str[index] != '\0')
	{
		if ((str[index] >= 0 && str[index] <= 31))
			return (0);
		else
		{
			index++;
		}
	}
	return (1);
}
