/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 03:30:46 by hichikaw          #+#    #+#             */
/*   Updated: 2025/01/23 14:17:42 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putptr_recursive(unsigned long address, int fd)
{
	int	len;
	int	result;

	len = 0;
	if (address >= 16)
	{
		result = ft_putptr_recursive(address / 16, fd);
		if (result == -1)
			return (-1);
		len += result;
	}
	result = ft_putchar_fd("0123456789abcdef"[address % 16], fd);
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}

int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	address;
	int				len;
	int				result;

	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	len = ft_putstr_fd("0x", fd);
	if (len == -1)
		return (-1);
	address = (unsigned long)ptr;
	result = ft_putptr_recursive(address, fd);
	if (result == -1)
		return (-1);
	len += result;
	return (len);
}
