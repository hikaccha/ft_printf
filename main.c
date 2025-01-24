/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:15:56 by hichikaw          #+#    #+#             */
/*   Updated: 2025/01/24 23:14:49 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

void print_test(const char *title, int (*print_func)(const char *, ...))
{
    long values[] = {-1, 16, 17, LONG_MIN, LONG_MAX, INT_MIN, INT_MAX, ULONG_MAX, -ULONG_MAX, 0};
    int i;

    print_func("%s\n", title);
    for (i = 0; i < 10; i++)
        print_func("%p\n", (void *)values[i]);
    print_func("\n");
}

int main(void)
{
    print_test("オリジナル", printf);
    print_test("俺のやつ", ft_printf);

    printf("%%\n");
    ft_printf("%%\n");

    return (0);
}
