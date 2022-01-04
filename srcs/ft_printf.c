/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:28:21 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 15:52:43 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_vprintf(const char	*format, va_list ap)
{
	t_fmt	*fmt;
	int		counter;
	fmt = ft_initialize_fmt(format, ap);
	if (!fmt)
		return(0);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;

	va_start(ap, format);
	counter = ft_vprintf(format, ap);
	va_end(ap);
	return (counter);
}
