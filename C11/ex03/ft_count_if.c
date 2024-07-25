/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamado <abnsila@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:08:56 by kamado            #+#    #+#             */
/*   Updated: 2024/07/25 15:08:58 by kamado           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (i < length)
    {
        if (f(tab[i]))
            count++;
        i++;
    }
    return (count);
}
