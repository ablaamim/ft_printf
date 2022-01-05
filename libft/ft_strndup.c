/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:44:27 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 16:50:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	int		size;
	char	*dest;

	if (!str)
		return (NULL);
	size = ft_strlen((char *) str);
	if ((size_t) size > n)
		size = n;
	dest = (char *) malloc (sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str, size);
	dest[size] = '\0';
	return (dest);
}
