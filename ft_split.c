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

char	**free_all(char **tab, size_t k)
{
	while (k > 0)
	{
		k--;
		free(tab[k]);
	}
	free(tab);
	return (NULL);
}

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
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

char	**fill_tab(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	start;

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
			tab[k] = ft_substr(s, start, i - start);
			if (tab[k] == NULL)
				return (free_all(tab, k));
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	words;
	size_t	i;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i <= words)
	{
		tab[i] = NULL;
		i++;
	}
	return (fill_tab(tab, s, c));
}
