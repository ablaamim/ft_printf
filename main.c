/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:17:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/16 02:14:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_printf("THIS IS A CHAR : %c\n%c\n%s\n", 'A', '@',"Multiple types !");
	ft_printf("This is a string : %s\n", "DiSPLAY ME");
	ft_printf("%d %d %i\n", -42, 1337, 0);
	ft_printf("%x%x\n", 42, -42);
	ft_printf("%p\n", 1337);
	return (EXIT_SUCCESS);
}
