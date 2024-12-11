/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:30:22 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 07:17:43 by hichikaw         ###   ########.fr       */
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

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	num;
	int		len;
	int		result;

	len = 0;
	if (n >= 10)
	{
		result = ft_putnbr_unsigned_fd(n / 10, fd);
		if (handle_write(result, &len) == -1)
			return (-1);
	}
	num = (n % 10) + '0';
	result = ft_putchar_fd(num, fd);
	if (handle_write(result, &len) == -1)
		return (-1);
	return (len);
}
