/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_types.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:44:29 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 17:00:41 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_conversion_types(t_fmt *fmt, t_holder *holder)
{
	if (holder->conversion == 'c')
		ft_type_char(fmt, holder);
	if (holder->conversion == 's')
		ft_type_str(fmt, holder);
}

void	ft_padding_left(char **src, char padding, int width)
{
	char	*tmp;
	size_t	strlen;
	size_t	padlen;

	strlen = ft_strlen(*src);
	if (!width || width < (int) strlen)
		width = strlen;
	tmp = (char *) malloc(sizeof(char) * width);
	if (!tmp)
		return ;
	padlen = width - strlen;
	ft_memset(tmp, padding, padlen);
	tmp[padlen] = '\0';
	ft_strlcat(tmp, *src, width + 1);
	free(*src);
	*src = tmp;
}

void	ft_padding_right(char **src, char padding, int width)
{
	char	*tmp;
	size_t	strlen;
	size_t	padlen;

	strlen = ft_strlen(*src);
	if (!width || width < (int) strlen)
		width = strlen;
	tmp = (char *) malloc (sizeof(char) * width);
	if (!tmp)
		return ;
	ft_strlcpy(tmp, *src, strlen + 1);
	padlen = width - strlen;
	ft_memset(&tmp[strlen], padding, padlen);
	tmp[width] = '\0';
	free(*src);
	*src = tmp;
}
