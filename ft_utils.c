/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:00:17 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/17 16:00:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	if (!src)
		return (0);
	src_len = ft_strlen((char *)src);
	if (dstsize)
	{
		while (--dstsize && *src)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (src_len);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	new = (char *)malloc((s1_len + s2_len + 1) * sizeof(*new));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, (s1_len + 1));
	ft_strlcpy((new + s1_len), s2, (s2_len + 1));
	return (new);
}

char	*ft_convert_base(size_t n, char *base)
{
	int		base_len;
	int		len;
	char	*n_base;
	size_t	aux;

	base_len = ft_strlen(base);
	len = 0;
	aux = n;
	if (n == 0)
		len = 1;
	while (aux != 0)
	{
		aux /= base_len;
		len++;
	}
	n_base = (char *)malloc((len + 1) * sizeof(*base));
	if (!n_base)
		return (NULL);
	n_base[len] = '\0';
	while (len--)
	{
		n_base[len] = base[n % (size_t)base_len];
		n /= (size_t)base_len;
	}
	return (n_base);
}

char	*ft_uitoa(unsigned int un)
{
	char			*str;
	int				len;
	unsigned int	n;

	n = un;
	len = 0;
	if (un == 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}	
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = (un % 10) + '0';
		un /= 10;
	}
	return (str);
}
