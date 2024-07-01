/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:47:23 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/01 10:08:55 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
    int i;
	int endWord = 1;

	i = 0;
	while (str[i] != '\0')
	{
		if (endWord == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			endWord = 0;
		}
		else if ((endWord == 1 && (str[i] >= 'A' && str[i] <= 'Z')) || (str[i] >= '0' && str[i] <= '9'))
			endWord = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			endWord = 0;
		}
		else if((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			endWord = 1;
		i++;
	}
	return (str);
}
