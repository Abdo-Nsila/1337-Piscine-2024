/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnsila <abnsila@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:33:58 by abnsila           #+#    #+#             */
/*   Updated: 2024/07/03 15:02:40 by abnsila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result ? 0 : 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	matched;
	char	*ptr;

	i = 0;
	matched = 0;
	if (!*to_find)
		return (str);

	while (str[i] != '\0')
	{
		matched = ft_strncmp(&str[i], to_find, ft_strlen(to_find));
		if (matched == 1)
		{
			ptr = &str[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
