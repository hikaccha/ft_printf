/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:34:32 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/25 19:28:30 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long	address;
	int				len;

	len = 0;
	address = (unsigned long)ptr;
	len += ft_putstr_fd("0x", fd);
	if (address == 0)
		len += ft_putchar_fd('0', fd);
	else
	{
		if (address >= 16)
			len += ft_putptr_fd((void *)(address / 16), fd);
		len += ft_putchar_fd("0123456789abcdef"[address % 16], fd);
	}
	return (len);
}
