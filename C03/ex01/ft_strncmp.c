/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:42:33 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/03 11:07:34 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	result;
	int	 *p;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n-1))
	{
		i++;
	}
	
	result = s1[i] - s2[i];
	p = &result;
	return (p);
}
