/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 02:19:56 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 14:36:15 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_printf("TEST 1 : |%c|\n", '@');
	ft_printf("TEST 2 : |%c|\n", ' ');
	ft_printf("TEST 3 : |%c|\n", 97);
	ft_printf("TEST 4 : |%c|\n", '0');
	ft_printf("TEST 5 : |%c|\n", '0' + 256);
	ft_printf("TEST 3 : |%c|\n", '0' - 256);
	return (EXIT_SUCCESS);
}
