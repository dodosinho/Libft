/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:48:43 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/12 11:08:35 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}

	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);

	ft_putchar_fd((n % 10) + '0', fd);
}