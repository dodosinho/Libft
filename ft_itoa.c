/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:28:38 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/13 14:46:30 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	int		ncopy;
	long	nbr;

	len = 0;
	ncopy = n;
	if (n <= 0)
		len++;
	while (ncopy != 0)
	{
		ncopy = ncopy / 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	nbr = n;
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
