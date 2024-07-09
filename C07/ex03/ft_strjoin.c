/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <abnsila@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:29 by kamado            #+#    #+#             */
/*   Updated: 2024/07/09 17:20:45 by kamado           ###   ########.fr       */
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	strs_len;
	char	*dest;
	int	pos;
	int	str_len;
	int	sep_len;

	i = 0;
	str_len = 0;
	pos = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	dest = (char*)malloc((strs_len + ((size - 1) * sep_len) + 1) * 1);
	if (!dest)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		str_len = ft_strlen(strs[i]);
		ft_strpcat(dest, strs[i], pos);
		if (i < size - 1)
			ft_strpcat(dest, sep, pos + str_len);
		pos += str_len + sep_len;
		i++;
	}
	dest[pos] = '\0';
	return (dest);
}
