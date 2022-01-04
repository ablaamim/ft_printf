/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   understanding_printf_placeholders.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:24:09 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 20:26:41 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("---------------------------------------------------------------\n");
	printf("------------------ PRINTF PLACEHOLDERS TESTS : ----------------\n");
	printf("---------------------------------------------------------------\n");
	printf("------------------------- RANDOM : ----------------------------\n");

	printf("WILL PRINT 3 BLANK SPACES BEFORE MY DIGIT : |%5d|\n", 32);
	printf("WILL PRINT 1337 : |%2d|\n", 1337);
	printf("|%10s|\n", "TEST ME, MOTHERFUCKER.");
	printf("|%5c|\n", '@');
	printf("|%10d|\n", 1337);

	printf("----------------------- CHARACTERS : --------------------------\n");

	printf("NORMAL : |%c|\n", '@');
	printf("MINIMUM FIELD WIDTH (3) : |%3c|\n", '@');
	printf("MINIMUM FIELD WIDTH LEFT ALIGN (10)            : |%-10c|\n", '@');
	printf("MINIMUM FIELD WIDTH WITHOUT LEFT ALIGNING (10) : |%10c|\n", '@');

	printf("------------------------- STRINGS : ---------------------------\n");

	printf("NORMAL : |%s|\n", "ALL SHALL FALL.");
	printf("MINIMUM FIELD WIDTH (5) : |%5s|\n", "Squeeze your brain more");
	printf("MINIMUM FIELD WIDTH (22)              : |%22s|\n", "FREEZING MOON.");
	printf("MINIMUM FIELD WIDTH (22) LEFT JUSTIFY : |%-22s|\n", "FREEZING MOON");
	return (EXIT_SUCCESS);
}
