/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   understanding_printf_flags.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:24:09 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 19:38:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("---------------------------------------------------------\n");
	printf("---------- MINIMUM FIELD WIDTH CONCEPT TESTS : ----------\n");
	printf("---------------------------------------------------------\n");

	printf("WILL PRINT 3 BLANK SPACES BEFORE MY DIGIT : |%5d|\n", 32);
	printf("|%2d|\n", 1337);
	printf("|%10s|\n", "TEST ME, MOTHERFUCKER.");
	printf("|%5c|\n", '@');
	printf("|%42d|\n", 1337);
	return (EXIT_SUCCESS);
}
