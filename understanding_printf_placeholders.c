/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   understanding_printf_placeholders.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:24:09 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 21:06:22 by ablaamim         ###   ########.fr       */
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
	printf("PAD WITH ZEROS : |%010d|\n", 1337);

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
	printf("PRECISION FIELD (4) : |%.4s|\n", "PRRRRRR!");
	printf("PRECISION FIELD LEFT ALIGN (4) : |%-.4s|\n", "PRRRR!");
	printf("MINIMUM FIELD WIDTH + PRECISION : |%10.10s|\n", "PRRRRR!");
	printf("MINIMUM FIELD WIDTH + PRECISION + LEFT ALIGN |%-10.10s|\n", "PRRRRR!");

	printf("------------------------ DIGITS : -----------------------------\n");
	printf("PRECISION : |%.5d|\n", 1337);
	printf("PRECISION WITH NEGATIVE NUMBERS : |%.5d|\n", -42);
	printf("PRECISION + FIELD WIDTH |%6.5d|\n", 1337);
	printf("PRECISION + FIELD WIDTH + LEFT ALIGN : |%-6.5d|\n", 1337);
	printf("PRECISION + FIELD WIDTH + LEFT ALIGN ON A NEGATIVE : |%-6.5d|\n", -42);
	printf("PRECISION + LEFT_ALIGN : |%-.8d|\n", -42);
	printf("FIELD WIDTH + 0 FLAG : |%08d|\n", -42);
	printf("FIELD WIDTH + 0 flag : |%05d|\n", -42);
	return (EXIT_SUCCESS);
}
