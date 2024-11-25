/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:12:10 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/25 20:36:19 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_process_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	else if (format == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	else if (format == 'p')
		return (ft_putptr_fd(va_arg(args, void *), 1));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	else if (format == 'u')
		return (ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1));
	else if (format == 'x' || format == 'X')
		return (ft_puthex_fd(va_arg(args, unsigned int), 1, format));
	else if (format == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}
