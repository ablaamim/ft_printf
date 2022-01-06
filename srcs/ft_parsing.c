/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:31:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 17:01:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_conversion_parser(t_fmt *fmt, t_holder *holder)
{
	if (!ft_strchr(HOLDER_ALL_FLAGS, fmt->format[fmt->i]) \
		&& ft_isprint(fmt->format[fmt->i]))
	{
		holder->conversion = fmt->format[fmt->i];
		fmt->i++;
	}
}

void	ft_width_parser(t_fmt *fmt, t_holder *holder)
{
	int	width;

	width = holder->width;
	if (ft_isdigit(fmt->format[fmt->i]))
	{
		while (ft_isdigit(fmt->format[fmt->i]))
		{
			width = (width * 10) + (fmt->format[fmt->i] - '0');
			fmt->i++;
		}
	}
	holder->width = width;
}

void	ft_precision_parser(t_fmt *fmt, t_holder *holder)
{
	int	precision;

	precision = holder->precision;
	if (fmt->format[fmt->i] == HOLDER_PRECISION)
	{
		fmt->i++;
		if (!ft_isdigit(fmt->format[fmt->i]))
			precision = 0;
		if (ft_isdigit(fmt->format[fmt->i]))
		{
			precision = 0;
			while (ft_isdigit(fmt->format[fmt->i]))
			{
				precision = (precision * 10) + (fmt->format[fmt->i] - '0');
				fmt->i++;
			}
		}
	}
	holder->precision = precision;
}

void	ft_flags_parser(t_fmt *fmt, t_holder *holder)
{
	char	*tmp;

	if (!holder->prefix)
		holder->prefix = ft_strdup("");
	while (ft_strchr(HOLDER_ALL_FLAGS, fmt->format[fmt->i]))
	{
		if (fmt->format[fmt->i] == HOLDER_LEFT_JUSTIFY)
			holder->left_justify = 1;
		if (ft_strchr(HOLDER_PREFIX, fmt->format[fmt->i]))
		{
			tmp = holder->prefix;
			holder->prefix = ft_append_char(tmp, fmt->format[fmt->i]);
			free(tmp);
		}
		if (fmt->format[fmt->i] == HOLDER_PADDING)
			holder->padding = HOLDER_PADDING;
		fmt->i++;
	}
}

void	*ft_parsing(t_fmt *fmt, t_holder *holder)
{
	ft_flags_parser(fmt, holder);
	ft_width_parser(fmt, holder);
	ft_precision_parser(fmt, holder);
	ft_conversion_parser(fmt, holder);
	if (!holder->conversion && ft_strchr(HOLDER_ALL_FLAGS, fmt->format[fmt->i]))
		ft_parsing(fmt, holder);
	return (holder);
}
