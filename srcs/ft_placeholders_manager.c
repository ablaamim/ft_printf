/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_placeholders_manager.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:18:03 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 17:29:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_placeholders_manager(t_fmt *fmt)
{
	t_holder *holder;

	fmt->i++;
	holder = ft_initialize_holder();
	ft_parse(fmt, holder);
	free(holder);
}
