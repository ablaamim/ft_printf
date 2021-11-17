/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:04:51 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/17 12:40:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_type_c(int c)
{
	return (write(1, &c, sizeof(char)));
}

int	ft_type_s(char *s)
{
	if (!s)
		s = "(null)";
	return (write(1, s, ft_strlen(s) * sizeof(char)));
}
