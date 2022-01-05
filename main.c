/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 02:19:56 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 02:30:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_printf("TESTING TYPE_C CONVERSION : |%c|\n", '@');
	ft_printf("|%c|\n", ' ');
	ft_printf("|%c|\n", 97);
	return (EXIT_SUCCESS);
}
