/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:17:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/16 11:51:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_printf("THIS IS A CHAR : %c\n%c\n%s\n", 'A', '@',"Multiple types !");
	ft_printf("This is a string : %s\n", "DiSPLAY ME");
	ft_printf("%d %d %i\n", -42, 1337, 0);
	ft_printf("%x\n%x\n", 42, -42);
	printf("----------------------\n");
	ft_printf("%p\n%p\n", 1337, -1337);
	printf("----------------------\n");
	ft_printf("%p\n%p\n", 1337, -1337);
	printf("----------------------\n");
	ft_printf("%x\n%x\n", 1337, -1337);
	printf("----------------------\n");
	printf("%x\n%x\n", 1337, -1337);
	printf("----------------------\n");
	ft_printf("%%\n");
	ft_printf("%f\n", 1.5); // WILL NOT WORK
	return (EXIT_SUCCESS);
}
