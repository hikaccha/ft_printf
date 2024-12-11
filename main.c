/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:15:56 by hichikaw          #+#    #+#             */
/*   Updated: 2024/12/12 02:13:42 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*s;
	long	address1;
	long	address2;
	long	address3;
	long	address4;
	long	address5;
	long	address6;
	long	address7;
	long	address8;
	long	address9;
	long	address10;

	address1 = -1;
	address2 = 16;
	address3 = 17;
	address4 = LONG_MIN;
	address5 = LONG_MAX;
	address6 = INT_MIN;
	address7 = INT_MAX;
	address8 = ULONG_MAX;
	address9 = -ULONG_MAX;
	address10 = 0;
	printf("%s \n", "オリジナル");
	printf("%p \n", address1);
	printf("%p \n", address2);
	printf("%p \n", address3);
	printf("%p \n", address4);
	printf("%p \n", address5);
	printf("%p \n", address6);
	printf("%p \n", address7);
	printf("%p \n", address8);
	printf("%p \n", address9);
	printf("%p \n", address10);
	printf("%s \n", "\n");

	printf("%s \n", "俺のやつ");
	ft_printf("%p \n", address1);
	ft_printf("%p \n", address2);
	ft_printf("%p \n", address3);
	ft_printf("%p \n", address4);
	ft_printf("%p \n", address5);
	ft_printf("%p \n", address6);
	ft_printf("%p \n", address7);
	ft_printf("%p \n", address8);
	ft_printf("%p \n", address9);
	ft_printf("%p \n", address10);
	printf("%s \n", "\n");

	printf("%% \n");
	ft_printf("%%\n");
	return (0);
}
