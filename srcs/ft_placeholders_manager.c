/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholders_manager.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:18:03 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 18:05:40 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholders_manager(t_fmt *fmt)
{
	t_holder	*holder;

	fmt->i++;
	holder = ft_initialize_holder();
	ft_parsing(fmt, holder);
	if (holder->conversion)
	{
		ft_conversion_types(fmt, holder);
		fmt->counter += write(1, holder->argument, holder->counter);
		free(holder->argument);
	}
	free(holder->prefix);
	free(holder);
}
