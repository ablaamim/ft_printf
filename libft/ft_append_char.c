/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 00:30:03 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 00:34:05 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append_char(char const *str, char const c)
{
	char	*concat;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	concat = (char *) malloc (sizeof(char) * (len + 2));
	if (!concat)
		return (NULL);
	i = 0;
	while (str[i])
	{
		concat[i] = str[i];
		i++;
	}
	concat[i++] = c;
	concat[i] = '\0';
	return (concat);
}
