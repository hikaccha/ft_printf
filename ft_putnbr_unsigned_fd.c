/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:30:22 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 01:41:53 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	num;
	int		len;

	len = 0;
	if (n >= 10)
		len += ft_putnbr_unsigned_fd(n / 10, fd);
	num = (n % 10) + '0';
	len += ft_putchar_fd(num, fd);
	return (len);
}
