/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <abnsila@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:29 by kamado            #+#    #+#             */
/*   Updated: 2024/07/15 11:49:49 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++ ;
	return (len);
}

void	ft_strpcat(char *dest, char *src, int pos)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[pos + j] = src[j];
		j++;
	}
}

char	*ft_cat_strs(char *dest, char **strs, int size, char *sep)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		ft_strpcat(dest, strs[i], pos);
		if (i < size - 1)
			ft_strpcat(dest, sep, pos + ft_strlen(strs[i]));
		pos += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	dest[pos] = '\0';
	return (dest);
}

int	count_strs(char **strs, int size)
{
	int	i;
	int	strs_len;

	i = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	return (strs_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	dest = (char *) malloc
		((count_strs(strs, size) + ((size - 1) * ft_strlen(sep)) + 1) * 1);
	if (!dest)
		return (0);
	ft_cat_strs(dest, strs, size, sep);
	return (dest);
}
