/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 23:43:28 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/08 23:43:28 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;

	ch = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			ch = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (ch);
}