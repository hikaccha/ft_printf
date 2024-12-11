/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:25:32 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 01:40:54 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	num;
	int		len;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		len = ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr_fd(n / 10, fd);
	num = (n % 10) + '0';
	len += ft_putchar_fd(num, fd);
	return (len);
}
