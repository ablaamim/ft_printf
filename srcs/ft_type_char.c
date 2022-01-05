/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:51:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 16:35:37 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_type_char(t_fmt *fmt, t_holder *holder)
{
	char	ch;

	ch = va_arg(fmt->ap, int);
	if (!holder->width)
		holder->width += 1;
	holder->argument = (char *) malloc (holder->width * sizeof(char));
	if (!holder->argument)
		return ;
	ft_memset(holder->argument, IS_SPACE, holder->width);
	if (holder->left_justify == 1)
		holder->argument[0] = ch;
	else
		holder->argument[holder->width - 1] = ch;
	holder->counter = holder->width;
}
