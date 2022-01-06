/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_ux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:05:35 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 00:08:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_type_ux(t_fmt *fmt, t_holder *holder, char *base)
{
	unsigned int	nbr;
	char			*number;

	number = NULL;
	nbr = (unsigned int)(va_arg(fmt->ap, unsigned int));
	number = ft_uitoa_base((unsigned long)nbr, base);
	holder->argument = ft_strdup(number);
	free(number);
	if (holder->precision > -1)
	{
		if (!holder->precision && nbr == 0)
		{
			free(holder->argument);
			holder->argument = ft_strdup("");
		}
		ft_padding_left(&holder->argument, '0', holder->precision);
		holder->padding = ' ';
	}
	if (nbr)
		ft_add_prefix(holder, 0);
	if (!holder->left_justify)
		ft_padding_left(&holder->argument, holder->padding, holder->width);
	else
		ft_padding_right(&holder->argument, ' ', holder->width);
	holder->counter = ft_strlen(holder->argument);
}
