/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:59:24 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/15 15:59:40 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i], sep))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_separator(str[i], sep))
			i++;
	}
	return (count);
}

int	ft_strlen(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !check_separator(str[i], sep))
		i++;
	return (i);
}

char	*ft_get_word(char *str, char *sep)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen(str, sep);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *sep)
{
	char	**strings;
	int		i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_words(str, sep) + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str, sep))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_get_word(str, sep);
			i++;
		}
		while (*str && !check_separator(*str, sep))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
