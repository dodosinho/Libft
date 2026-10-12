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

char	**ft_split(char const *s, char c)
{
	size_t 	i;
	size_t	is_word;
	char 	**tab;

	i = 0;
	is_word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;

		if (s[i] != '\0')
		{
			is_word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}

	tab = malloc(sizeof(char *) * (is_word + 1));
	if (tab == NULL)
		return (NULL);

	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;

		if (s[i] != '\0')
		{
			is_word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
}