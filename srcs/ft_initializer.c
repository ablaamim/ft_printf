/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initializer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:45:58 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 15:53:18 by ablaamim         ###   ########.fr       */
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
