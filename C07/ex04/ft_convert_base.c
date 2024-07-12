/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 08:04:34 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/11 17:25:46 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	ft_valid_base(char *base, int len);
int	ft_atoi_base(char *str, char *base);

int	ft_nbr_len(int nbr, char *base)
{
	int	base_len;
	int	nbr_len;

	nbr_len = 0;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		nbr = -nbr;
		nbr_len++;
	}
	while (nbr >= base_len)
	{
		nbr = nbr / base_len;
		nbr_len++;
	}
	nbr_len++;
	return (nbr_len);
}

char	*ft_putnbr_base(int nbr, char *base, char *dest, int nbr_len)
{
	int		lenght_base;
	int		i;

	lenght_base = ft_strlen(base);
	i = 0;
	if (nbr < 0)
	{
		dest[i] = '-';
		nbr *= -1;
		i++;
	}
	nbr_len--;
	while (nbr >= lenght_base)
	{
		dest[nbr_len] = base[nbr % lenght_base];
		nbr /= lenght_base;
		nbr_len--;
		printf("nbr: %d  here: %s\n",nbr,  dest);
	}
	if (nbr < lenght_base)
		dest[i] = base[nbr];
	dest[nbr_len - 1] = '\0';
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal_nbr;
	int		nbr_len;
	char	*dest;

	decimal_nbr = ft_atoi_base(nbr, base_from);
	nbr_len = ft_nbr_len(decimal_nbr, base_to);
	dest = (char *)malloc((nbr_len + 1) * 1);
	printf("\n||----------------------------------------||\n");
	printf("Dest Size: %d\n", (nbr_len + 1) * 1);
	printf("Current base: %s => %s\n", nbr, base_from);
	printf("Decimal nbr: %d\n", decimal_nbr);
	printf("Nbr len: %d\n", ft_nbr_len(decimal_nbr, base_to));
	return (ft_putnbr_base(decimal_nbr, base_to, dest, nbr_len));
}

int	main(int ac, char **av)
{
	char	*magic_nbr_base;

	if (!ac)
		return (0);
	magic_nbr_base = ft_convert_base(av[1], av[2], av[3]);
	printf("Final Base: %s => %s\n", magic_nbr_base, av[3]);
	printf("||----------------------------------------||\n");
	return (0);
}
