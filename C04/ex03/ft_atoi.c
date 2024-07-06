/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:19:50 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/04 10:37:44 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char* str)
{
    int i;
	int sign; 
	int nbr_base;
	
    i = 0;
    sign = 1;
    nbr_base = 0;
	while (str[i] == ' ') {
		i++;
	}

	while (str[i] == '-' || str[i] == '+') {
		sign = sign * (1 - 2 * (str[i++] == '-'));
	}

	while (str[i] >= '0' && str[i] <= '9') {
        nbr_base = 10 * nbr_base + (str[i++] - '0');
	}
	return (nbr_base * sign);
}
