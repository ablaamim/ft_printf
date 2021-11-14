/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:17:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 22:33:11 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_printf("THIS IS A CHAR : %c\n", 'A');
	return (EXIT_SUCCESS);
}
