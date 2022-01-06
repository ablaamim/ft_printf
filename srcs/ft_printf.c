/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:21 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 17:00:38 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vprintf(const char	*format, va_list ap)
{
	t_fmt	*fmt;
	int		counter;

	fmt = ft_initialize_fmt(format, ap);
	if (!fmt)
		return (0);
	while (fmt->format[fmt->i])
	{
		if (fmt->format[fmt->i] == '%')
			ft_placeholders_manager(fmt);
		else
			fmt->counter += write(1, &fmt->format[fmt->i++], 1);
	}
	counter = fmt->counter;
	free(fmt);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;

	if (!format)
		return (0);
	va_start(ap, format);
	counter = ft_vprintf(format, ap);
	va_end(ap);
	return (counter);
}
