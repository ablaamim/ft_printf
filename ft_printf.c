/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:19:52 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/17 12:25:38 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_type(va_list ap, char type)
{
	if (type == 'c')
		return (ft_type_c(va_arg(ap, int)));
	else
		return (0);
}

int	ft_vprintf(va_list ap, char *format)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_type(ap, format[i]);
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	len;

	va_start(ap, format);
	len = ft_vprintf(ap, (char *) format);
	va_end(ap);
	return (len);
}
