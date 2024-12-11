/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:21:30 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 07:31:47 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned int n, int fd, char format)
{
	char	*hex_base;
	int		len;
	int		result;

	len = 0;
	if (format == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (n >= 16)
	{
		result = ft_puthex_fd(n / 16, fd, format);
		if (result == -1)
			return (-1);
		len += result;
	}
	result = ft_putchar_fd(hex_base[n % 16], fd);
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}
