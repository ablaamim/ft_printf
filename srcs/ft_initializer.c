/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:45:58 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 18:05:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_fmt	*ft_initialize_fmt(const char *format, va_list ap)
{
	t_fmt	*fmt;

	fmt = malloc (sizeof(t_fmt));
	if (!fmt)
		return (NULL);
	fmt->format = format;
	va_copy(fmt->ap, ap);
	fmt->i = 0;
	fmt->counter = 0;
	return (fmt);
}

t_holder	*ft_initialize_holder(void)
{
	t_holder	*holder;

	holder = malloc (sizeof(t_holder));
	if (!holder)
		return (NULL);
	holder->left_justify = 0;
	holder->prefix = ft_strdup("");
	holder->padding = ' ';
	holder->width = 0;
	holder->precision = -1;
	holder->conversion = '\0';
	holder->argument = NULL;
	holder->counter = 0;
	return (holder);
}
