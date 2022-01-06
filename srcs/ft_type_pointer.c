/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:46:39 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/06 17:35:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	*ft_nullset(t_holder *holder)
{
	char	*number;

	if (holder->precision > -1)
	{
		number = (char *)malloc((holder->precision + 1) * sizeof(char));
		if (!number)
			return (NULL);
		ft_memset(number, '0', (size_t) holder->precision);
		number[holder->precision] = '\0';
	}
	else
		number = ft_strdup("0");
	return (number);
}

void	ft_type_pointer(t_fmt *fmt, t_holder *holder)
{
	void	*ptr;
	char	*number;

	number = NULL;
	ptr = va_arg(fmt->ap, void *);
	if (!ptr)
		number = ft_nullset(holder);
	else
		number = ft_uitoa_base((unsigned long long) ptr, HEXA_LOWER_BASE);
	holder->argument = ft_strjoin(POINTER_AND_HEXAL_PREFIX, number);
	free(number);
	if (!holder->left_justify)
		ft_padding_left(&holder->argument, ' ', holder->width);
	else
		ft_padding_right(&holder->argument, ' ', holder->width);
	holder->counter = ft_strlen(holder->argument);
}
