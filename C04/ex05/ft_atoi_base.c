/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:38:26 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/10 11:38:36 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_valid_base(char *base, int len)
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
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
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

int	ft_valid_char(char c, char *base)
{
	int	i;
	int	cond;

	i = 0;
	cond = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			cond = 1;
		i++;
	}
	return (cond);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	sign;
	int	i;
	int	base_len;

	nbr = 0;
	sign = 1;
	i = 0;
	base_len = ft_strlen(base);
	if (ft_valid_base(base, base_len) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (ft_valid_char(str[i], base) == 1))
	{
		nbr = nbr * base_len + (get_base_index(str[i], base));
		i++;
	}
	return (nbr * sign);
}
