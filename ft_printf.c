/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:10:02 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 22:31:24 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_select(char c, va_list args, int count)
{
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_select(s[i], args, count);
		}
		else
		{
			count++;
			write(1, &s[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
