/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <abnsila@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:34:29 by kamado            #+#    #+#             */
/*   Updated: 2024/07/09 16:31:20 by kamado           ###   ########.fr       */
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
void	ft_strncat(char *dest, char *src, int n, int pos)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[pos + j] = src[j];
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char sep)
{
	int	i;
	int	strs_len;
	char	*dest;
	int	pos;
	int	str_len;

	i = 0;
	str_len = 0;
	pos = 0;
	while (i < size)
	{
		strs_len += ft_strlen(strs[i]);
		i++;
	}
	dest = (char*)malloc((strs_len + (size - 1) + 1) * 1);
	if (!dest)
		return ("0");
	i = 0;
	while (i < size)
	{
		str_len = ft_strlen(strs[i]);
		ft_strncat(dest, strs[i], str_len, pos);
		if (i < size - 1)
			dest[str_len + pos] = sep;
		pos += str_len + 1;
		i++;
	}
	return (dest);
}
