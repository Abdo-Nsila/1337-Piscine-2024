/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 08:47:23 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/02 19:00:10 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str, int i, int *endword)
{
	str[i] = str[i] + 32;
	*endword = 0;
}

void	ft_strupcase(char *str, int i, int *endword)
{
	str[i] = str[i] - 32;
	*endword = 0;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	endword;

	i = 0;
	endword = 1;
	while (str[i])
	{
		if (endword == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			ft_strupcase(str, i, &endword);
		else if ((endword == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			|| (str[i] >= '0' && str[i] <= '9'))
			endword = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_strlowcase(str, i, &endword);
		else if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z'))
			endword = 1;
		i++;
	}
	return (str);
}
