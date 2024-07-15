/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:04:34 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/14 15:35:38 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_valid_base(char *base, int len);
int	ft_atoi_base(char *str, char *base);

int	ft_nbr_len(int nbr, char *base, int lenght)
{
	unsigned int	nb;

	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)ft_strlen(base))
	{
		nb /= ft_strlen(base);
		lenght++;
	}
	lenght++;
	return (lenght);
}

void	ft_putnbr_base(int nbr, char *base, char *nbrf)
{
	int		lenght_base;
	long	nb;
	int		i;
	int		len_nbrf;

	lenght_base = ft_strlen(base);
	len_nbrf = ft_nbr_len(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= lenght_base)
	{
		nbrf[len_nbrf] = base[nb % lenght_base];
		nb /= lenght_base;
		len_nbrf--;
	}
	if (nb < lenght_base)
		nbrf[i] = base[nb];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*dest;
	int		decimal_nbr;
	int		nbr_len;

	if (ft_valid_base(base_to, ft_strlen(base_to)) == 0
		|| ft_valid_base(base_from, ft_strlen(base_from)) == 0)
		return (0);
	decimal_nbr = ft_atoi_base(nbr, base_from);
	nbr_len = ft_nbr_len(decimal_nbr, base_to, 0);
	dest = (char *)malloc((nbr_len + 1) * 1);
	if (!dest)
		return (0);
	ft_putnbr_base(decimal_nbr, base_to, dest);
	dest[nbr_len] = '\0';
	return (dest);
}
