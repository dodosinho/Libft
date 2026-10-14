/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 21:55:42 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/10 21:55:42 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	k = ft_strlen(s1) - 1;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0' && s1[i] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	while (k > i)
	{
		j = 0;
		while (set[j] != '\0' && s1[k] != set[j])
			j++;
		if (set[j] == '\0')
			break ;
		k--;
	}
	str = malloc(sizeof(char) * (k - i + 2));
	if (str == NULL)
		return (NULL);
	l = 0;
	while (i <= k)
	{
		str[l] = s1[i];
		i++;
		l++;
	}
	str[l] = '\0';
	return (str);
}
