/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:14:31 by kamado            #+#    #+#             */
/*   Updated: 2024/07/09 13:52:41 by kamado           ###   ########.fr       */
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

int	ft_checkspaces(char c)
{
	if (c == '\n' || c == '\t' || c == '\f'
		|| c == '\r' || c == '\v' || c == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr_base;

	i = 0;
	sign = 1;
	nbr_base = 0;
	while (ft_checkspaces(str[i]) == 1)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		sign = sign * (1 - 2 * (str[i] == '-'));
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr_base = 10 * nbr_base + (str[i] - '0');
		i++;
	}
	return (nbr_base * sign);
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

int	ft_atoi_base(char *str, char *base)
{
	long	nbr;

	nbr = ft_atoi(str);
	ft_putnbr_base(nbr, base);
}
