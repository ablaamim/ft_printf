/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:17:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/17 12:42:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

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
return (EXIT_SUCCESS);
}
