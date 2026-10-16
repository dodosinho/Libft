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
	size_t	k;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	k = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (k > i && ft_strchr(set, s1[k - 1]))
		k--;
	str = malloc(sizeof(char) * (k - i + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], k - i + 1);
	return (str);
}
