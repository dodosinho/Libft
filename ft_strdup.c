/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:28:12 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/09 19:08:14 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	copy = malloc((i + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (s[j] != '\0')
	{
		copy[j] = s[j];
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
