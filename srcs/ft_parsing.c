/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:31:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 00:37:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flags_parser(t_fmt *fmt, t_holder *holder)
{
	char	*tmp;
	if(!holder->prefix)
		holder->prefix = ft_strdup("");
	while (ft_strchr(HOLDER_ALL_FLAGS, fmt->format[fmt->i]))
	{
		if (fmt->format[fmt->i] == HOLDER_JUSTIFY)
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
	return (holder);
}
