/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 03:30:46 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 02:43:49 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putptr_recursive(unsigned long address, int fd)
{
	int	len;

	len = 0;
	if (address >= 16)
		len += ft_putptr_recursive(address / 16, fd);
	len = ft_putchar_fd("0123456789abcdef"[address % 16], fd);
	return (len);
}

int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	address;
	int				len;

	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	len = 0;
	address = (unsigned long)ptr;
	len = ft_putstr_fd("0x", fd);
	if (address == 0)
		len = ft_putchar_fd('0', fd);
	else
	{
		if (address >= 16)
			len += (ft_putptr_recursive(address / 16, fd));
		len += ft_putchar_fd("0123456789abcdef"[address % 16], fd);
	}
	return (len);
}
