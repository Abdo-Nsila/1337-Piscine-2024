/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:20:59 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/30 18:35:57 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	if (str[index] == '\0' )
	{
		return (1);
	}

	while (str[index] != '\0')
	{
		if ((str[index] >= 'A' && str [index] <= 'Z') || (str [index] >= 'a' && str [index] <= 'z'))
			index++;
		else
		{
			return (0);
		}
	}	
	return (1);
}
