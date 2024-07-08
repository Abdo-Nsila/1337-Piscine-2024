/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:38:36 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/07 18:34:01 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
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
		if (base[i] == '-' || base[i] == '+')
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

void	ft_convert_to_base(int longnbr, char *base, int len)
{
	if (longnbr < len)
		ft_putchar(base[longnbr]);
	else if (longnbr >= len)
	{
		ft_convert_to_base(longnbr / len, base, len);
		ft_convert_to_base(longnbr % len, base, len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (ft_isvalid(base, len) == 1)
	{
		if (nbr < 0)
			ft_convert_to_base(-(long)nbr, base, len);
		else
			ft_convert_to_base((long)nbr, base, len);
	}
}
