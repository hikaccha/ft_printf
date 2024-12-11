/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:25:32 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 07:18:27 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	handle_write(int result, int *len)
{
	if (result == -1)
		return (-1);
	*len += result;
	return (0);
}

static	int	write_number(int n, int fd, int *len)
{
	char	num;
	int		result;

	if (n >= 10)
	{
		result = write_number(n / 10, fd, len);
		if (result == -1)
			return (-1);
	}
	num = (n % 10) + '0';
	result = ft_putchar_fd(num, fd);
	return (handle_write(result, len));
}

int	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		result;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		result = ft_putchar_fd('-', fd);
		if (handle_write(result, &len) == -1)
			return (-1);
		n = -n;
	}
	if (write_number(n, fd, &len) == -1)
		return (-1);
	return (len);
}
