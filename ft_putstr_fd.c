/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:40:30 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/11 23:42:21 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	result;

	len = 0;
	if (!s)
		s = "(null)";
	while (*s)
	{
		result = ft_putchar_fd(*s, fd);
		if (result == -1)
			return (-1);
		len += result;
		s++;
	}
	return (len);
}
