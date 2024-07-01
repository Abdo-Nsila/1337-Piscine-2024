/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:49:15 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/01 15:03:41 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0' )
	{
		dest[count] = src[count];
		count++;
	}
	dest[count + 1] = '\0';
	return (dest);
}
