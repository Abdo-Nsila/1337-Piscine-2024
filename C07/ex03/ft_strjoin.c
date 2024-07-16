/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:00:33 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/16 10:42:43 by abnsila          ###   ########.fr       */
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
		pos += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strpcat(dest, sep, pos);
			pos += ft_strlen(sep);
		}
		i++;
	}
	dest[pos] = '\0';
	return (dest);
}

int	count_strs(char **strs, int size, char *sep)
{
	int	i;
	int	strs_len;

	i = 0;
	strs_len = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		if (i < size - 1)
			strs_len += ft_strlen(sep);
		i++;
	}
	return (strs_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;

	if (size <= 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *) malloc
		((count_strs(strs, size, sep) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_cat_strs(dest, strs, size, sep);
	return (dest);
}
