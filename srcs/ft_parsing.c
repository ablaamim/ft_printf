/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:31:57 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/04 17:48:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flags_parser(t_fmt *fmt, t_holder *holder)
{

}

void	*ft_parsing(t_fmt *fmt, t_holder *holder)
{
	ft_flags_parser(fmt, holder);
	return (holder);
}
