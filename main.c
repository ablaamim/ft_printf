/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:57:40 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/24 22:56:23 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int	res;

	printf("--------------------- TEST C -----------------------\n");
	ft_printf("This is my favorite character : %c\n", '@');
	printf("This is my favorite character : %c \n", '@');
	printf("----------------------------------------------------\n");
	printf("------------------ RETURNED VALUE ------------------\n");
	res = ft_printf("%c\n", '@');
	printf("%d\n", res);
	printf("----------------------------------------------------\n");
	printf("--------------------- TEST S -----------------------\n");
	res = 0;
	ft_printf("Display me out : %s\n", "~~I @in't @ $simple $tring~~!\t\n");
	res = ft_printf("Display me out : %s\n", "~~I @in't @ $simple $tring~~!\t\n");
	printf("%d\n", res);
	printf("-----------------------------------------------------\n");
	printf("--------------------- TEST P AND X ------------------------\n");
	ft_printf("%x\n%p\n", 1337, 1337);
	ft_printf("%x\n%p\n", (void *) 1337, (void *) 1337);
	printf("-----------------------------------------------------\n");
	printf("--------------------- TESTING D ---------------------------\n");
	ft_printf("%d\n%d\n", INT_MIN, INT_MAX);
	printf("-----------------------------------------------------\n");
	return (EXIT_SUCCESS);
}
