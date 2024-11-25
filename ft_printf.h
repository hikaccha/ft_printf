/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:43:16 by hichikaw          #+#    #+#             */
/*   Updated: 2024/11/25 20:48:43 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int					ft_printf(const char *format, ...);
int					ft_putchar_fd(char c, int fd);
int					ft_putstr_fd(char *s, int fd);
int					ft_putnbr_fd(int n, int fd);
int					ft_putnbr_unsigned_fd(unsigned int n, int fd);
int					ft_puthex_fd(unsigned int n, int fd, char format);
int					ft_putptr_fd(void *ptr, int fd);
int					ft_process_format(va_list args, const char format);

#endif
