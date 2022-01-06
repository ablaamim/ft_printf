/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 00:09:17 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 00:15:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_type_percent(t_holder *holder)
{
	holder->argument = ft_append_char("", holder->conversion);
	if (!holder->left_justify)
		ft_padding_left(&holder->argument, holder->padding, holder->width);
	else
		ft_padding_right(&holder->argument, ' ', holder->width);
	holder->counter = ft_strlen(holder->argument);
}
