/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 21:19:42 by abnsila           #+#    #+#             */
/*   Updated: 2024/06/27 21:24:52 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	alphabet;

	alphabet = 122;
	while (alphabet >= 97)
	{
		write (1, &alphabet, 1);
		alphabet--;
	}
}
