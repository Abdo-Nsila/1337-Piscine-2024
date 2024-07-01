/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:20:48 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/01 16:17:49 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int len;

	i = 0;
	len = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i+1] = '\0';

	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}
