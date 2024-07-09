/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:14:31 by kamado            #+#    #+#             */
/*   Updated: 2024/07/09 22:21:26 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_check_spaces(char c)
{
	if (c == '\n' || c == '\t' || c == '\f'
		|| c == '\r' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_isvalid(char *base, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (len < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || ft_check_spaces(base[i]) == 1)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_base_index(char c, char *base)
{
	int		i;

	i = 0;
	while (i < ft_strlen(base))
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	sign;
	int	i;
	int	str_len;
	int	base_len;
	
	nbr = 0;
	sign = 1;
	i = 0;
	str_len = ft_strlen(str);
	base_len = ft_strlen(base);
	if (ft_isvalid(base, base_len) == 0)
		return (0);
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (i < str_len)
	{
		nbr = nbr * base_len + (get_base_index(str[i], base));
		i++;
	}
	return (nbr * sign);
}

int main(int ac,char **av )
{
	printf("Nbr: %d\n", ft_atoi_base(av[1], av[2]));
}
