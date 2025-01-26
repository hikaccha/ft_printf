/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:15:56 by hichikaw          #+#    #+#             */
/*   Updated: 2025/01/27 06:44:30 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_test(const char *label, int (*func1)(const char *, ...),
		int (*func2)(const char *, ...))
{
	long		values_p[] = {-1, 16, 17, INT_MIN, INT_MAX, 0};
	int		values_d[] = {-1, 16, 17, INT_MIN, INT_MAX, 0};
	unsigned int	values_u[] = {0, -1, 42, UINT_MAX};
	char			values_c[] = {'a', 'A', 'p', 'P', ' ', '\n', '\t', '?', '!', '@'};
	char			*values_s[] = {"apple", "ApPlE", "aPpLe", "APPLE", "", "\\n", "\\t", "A", "a", "あ", "ア"};

	printf("\n======= %s =======\n", label);
	printf("%-20s %-30s %s\n", "Type", "Original", "My ft_printf");
	printf("-------------------------------------------------------------\n");
	for (int i = 0; i < 10; i++)
		printf("%-20s | %-30c | %c\n", "Char", values_c[i], values_c[i]);
	for (int i = 0; i < 11; i++)
		printf("%-20s | %-30s | %s\n", "String", values_s[i], values_s[i]);
	for (int i = 0; i < 7; i++)
		printf("%-20s | %-30p | %p\n", "Pointer", (void *)values_p[i], (void *)values_p[i]);
	for (int i = 0; i < 7; i++)
		printf("%-20s | %-30d | %d\n", "Decimal", values_d[i], values_d[i]);
	for (int i = 0; i < 7; i++)
		printf("%-20s | %-30i | %i\n", "Integer", values_d[i], values_d[i]);
	for (int i = 0; i < 5; i++)
		printf("%-20s | %-30u | %u\n", "Unsigned", values_u[i], values_u[i]);
	for (int i = 0; i < 5; i++)
		printf("%-20s | %-30x | %x\n", "Hex (x)", values_u[i], values_u[i]);
	for (int i = 0; i < 5; i++)
		printf("%-20s | %-30X | %X\n", "Hex (X)", values_u[i], values_u[i]);
	printf("%-20s | %-30s | %s\n", "Percent", "%%", "%%");
	printf("-------------------------------------------------------------\n");
}

int	main(void)
{
	print_test("Comparison", printf, ft_printf);
	return (0);
}

//#include "ft_printf.h"
//#include "stdio.h"
//
//int main(int ac, char **av)
//{
//	if (ac != 2)
//		return (1);
//	long long p = 9223372036854775807;
//	ft_printf("%s\n", av[1]);
//	// ft_printf("%c\n", p);
//	ft_printf("%p\n", &p);
//	ft_printf("%d\n", p);
//	ft_printf("%i\n", p);
//	ft_printf("%u\n", p);
//	ft_printf("%x\n", p);
//	ft_printf("%X\n", p);
//	ft_printf("%%\n");
//	printf("%s\n", av[1]);
//	// printf("%c\n", p);
//	printf("%p\n", &p);
//	printf("%d\n", p);
//	printf("%i\n", p);
//	printf("%u\n", p);
//	printf("%x\n", p);
//	printf("%X\n", p);
//	printf("%%\n");
//	return (0);
//}
