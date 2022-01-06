/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 02:19:56 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 00:17:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("----------------------- CHAR TESTS ----------------------------\n");

	ft_printf("TEST 1 : |%c|\n", '@');
	printf("TEST 1 : |%c|\n", '@');
	ft_printf("TEST 2 : |%c|\n", ' ');
	ft_printf("TEST 3 : |%c|\n", 97);
	ft_printf("TEST 4 : |%c|\n", '0');
	ft_printf("TEST 5 : |%c|\n", '0' + 256);
	ft_printf("TEST 3 : |%c|\n", '0' - 256);

	printf("----------------------- STR TESTS -----------------------------\n");

	ft_printf("TEST 1 : |%s|\n", "1337");
	printf("TEST 1 : |%s|\n", "1337");
	ft_printf("TEST 2 : |%s|\n", NULL);
	ft_printf("TEST 3 : |%s|\n", "");
	printf("TEST 3 : |%s|\n", "");

	printf("------------------------ POINTERS -----------------------------\n");

	ft_printf("TEST 1 : |%p|\n", (void *) 'A');
	printf("TEST 1 : |%p|\n", (void *) 'A');
	ft_printf("TEST 2 : |%p|\n", 42);
	printf("TEST 2 : |%p|\n", (void *) 42);
	ft_printf("TEST 3 : |%p|\n", (void *) 0);
	printf("TEST 3 : |%p|\n", (void *) 0);
	ft_printf("TEST 4 : |%p|\n", NULL);
	printf("TEST 4 : |%p|\n", NULL);
	ft_printf("TEST 5 : |%p|\n", "HEY");
	printf("TEST 5 : |%p|\n", "HEY");
	printf("------------------------ PERCENT ------------------------------\n");
	ft_printf("SIMPLE TEST : |%%|\n");
	printf("SIMPLE TEST : |%%|\n");
	printf("------------------------ HEXADECIMALS -------------------------\n");
	ft_printf("TEST 1 : |%x|\n", 42);
	printf("TEST 1 : |%x|\n", 42);
	return (EXIT_SUCCESS);
}
