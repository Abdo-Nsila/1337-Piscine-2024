/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:38:36 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/08 12:01:26 by kamado           ###   ########.fr       */
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

void	ft_convert_to_base(int nbr, char *base, int len)
{
	if (nbr > 0)
	{
		ft_convert_to_base(nbr / len, base, len);
		ft_putchar(base[nbr % len]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (ft_isvalid(base, len) == 1)
	{
		if (nbr == 0)
		{
			ft_putchar('0');
		}
		else if (nbr == -2147483648)
		{
			ft_putchar('-');
			nbr = -(nbr / len);
			ft_convert_to_base(nbr, base, len);
			ft_putchar(base[nbr % len]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_convert_to_base(-nbr, base, len);
		}
		else
			ft_convert_to_base(nbr, base, len);
	}
}
