/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:43:54 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 18:57:02 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_convert_digit_width(t_holder *holder, int sign)
{
	if (holder->left_justify)
	{
		ft_add_prefix(holder, sign);
		ft_padding_right(&holder->argument, ' ', holder->width);
	}
	else
	{
		if (holder->padding == ' ')
		{
			ft_add_prefix(holder, sign);
			ft_padding_left(&holder->argument, holder->padding, holder->width);
		}
		else if (holder->padding == '0')
		{
			if (sign < 0 || ft_strchr(holder->prefix, ' ') || \
				ft_strchr(holder->prefix, '+'))
				ft_padding_left(&holder->argument, holder->padding, holder->width - 1);
			else
				ft_padding_left(&holder->argument, holder->padding, holder->width);
			ft_add_prefix(holder, sign);
		}
	}
}	

void	ft_type_digit(t_fmt *fmt, t_holder *holder)
{
	int			sign;
	long int	arg;

	sign = 1;
	arg = (int) va_arg(fmt->ap, int);
	if (arg < 0)
		sign *= -1;
	holder->argument = ft_uitoa_base(sign * arg, DECIMAL_BASE);
	if (holder->precision > -1)
	{
		if (!holder->precision && arg == 0)
		{
			free(holder->argument);
			holder->argument = ft_strdup("");
		}
		ft_padding_left(&holder->argument, '0', holder->precision);
		holder->padding = ' ';
	}
	ft_convert_digit_width(holder, sign);
	holder->counter = ft_strlen(holder->argument);
}
