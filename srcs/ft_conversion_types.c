/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_types.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:44:29 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 18:59:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_conversion_types(t_fmt *fmt, t_holder *holder)
{
	if (holder->conversion == 'c')
		ft_type_char(fmt, holder);
	if (holder->conversion == 's')
		ft_type_str(fmt, holder);
	if (holder->conversion == 'i' || holder->conversion == 'd')
		ft_type_digit(fmt, holder);
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

static void	ft_prefix_ux(t_holder *holder)
{
	char	*temp;

	temp = holder->argument;
	if (ft_strchr(holder->prefix, '#'))
	{
		if (holder->conversion == 'x')
			holder->argument = ft_strjoin(POINTER_AND_HEXAL_PREFIX, temp);
		if (holder->conversion == 'X')
			holder->argument = ft_strjoin(HEXAU_PREFIX, temp);
		free(temp);
	}
}

void	ft_add_prefix(t_holder	*holder, int sign)
{
	int	len;

	len = (int)ft_strlen(holder->argument);
	if (holder->conversion == 'd' || holder->conversion == 'i')
	{
		len += 1;
		if (ft_strchr(holder->prefix, IS_PLUS) && sign == 1)
			ft_padding_left(&holder->argument, IS_PLUS, len);
		else if (ft_strchr(holder->prefix, IS_SPACE) && sign == 1)
			ft_padding_left(&holder->argument, IS_SPACE, len);
		else if (sign == -1)
			ft_padding_left(&holder->argument, IS_MINUS, len);
	}
	else if (holder->conversion == 'x' || holder->conversion == 'X')
		ft_prefix_ux(holder);
}
