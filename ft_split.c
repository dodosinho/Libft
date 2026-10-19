/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 20:54:29 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/11 20:54:29 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			words++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	k;

	if (s == NULL)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			tab[k++] = ft_substr(s, start, i - start);
		}
	}
	tab[k] = NULL;
	return (tab);
}
