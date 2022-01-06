/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:59:54 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 18:08:44 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_type_str(t_fmt *fmt, t_holder *holder)
{
	char	*str;
	char	*tmp;
	int		len;

	str = ft_strdup(va_arg(fmt->ap, char *));
	if (!str)
		str = ft_strdup("(null)");
	len = (int) ft_strlen(str);
	holder->argument = (char *) malloc((len + 1) * sizeof(char));
	if (!holder)
		return ;
	ft_strlcpy(holder->argument, str, len + 1);
	if (holder->precision > -1)
	{
		tmp = holder->argument;
		holder->argument = ft_strndup(tmp, (size_t) holder->precision);
		free(tmp);
	}
	if (!holder->left_justify)
		ft_padding_left(&holder->argument, ' ', holder->width);
	else
		ft_padding_right(&holder->argument, ' ', holder->width);
	holder->counter = ft_strlen(holder->argument);
	free(str);
}
