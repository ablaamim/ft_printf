/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:17:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/15 00:43:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_printf("THIS IS A CHAR : %c\n%c\n%s\n", 'A', '@',"Multiple types !");
	ft_printf("This is a string : %s\n", "DiSPLAY ME");
	return (EXIT_SUCCESS);
}
