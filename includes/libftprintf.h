/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:41:18 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 00:13:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

# define HOLDER_CONVERSION "cspdiuxX"
# define HOLDER_ALL_FLAGS "-0# +"
# define HOLDER_JUSTIFY '-'
# define HOLDER_PREFIX "# +"
# define HOLDER_PADDING '0'
# define HOLDER_PRECISION '.'

# define DECIMAL_BASE "0123456789"
# define HEXA_UPPER_BASE "0123456789ABCDEF"
# define HEXA_LOWER_BASE "0123456789abcdef"

# define POINTER_AND_HEXAL_PREFIX "0x"
# define HEXU_PREFIX "0X"

# define MINUS '-'
# define PLUS '+'
# define SPACE ' '

// STRUCTURES USED :

typedef struct s_fmt
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		counter;
}	t_fmt;

typedef struct s_holder
{
	int		left_justify;
	char	*prefix;
	char	padding;
	int		width;
	int		precision;
	char	conversion;
	char	*argument;
	size_t	counter;
}	t_holder;

// MANDATORY FUNCTIONS :

int	ft_printf(const char *format, ...);
int	ft_vprintf(const char *format, va_list ap);

// STRUCTS INITIALIZERS

t_fmt	*ft_initialize_fmt(const char *format, va_list ap);

//PLACEHOLDERS MANAGEMENT AND PARSING

void		ft_placeholders_manager(t_fmt *fmt);
t_holder	*ft_initialize_holder(void);
void		*ft_parsing(t_format *fmt, t_holder *holder);
void		ft_flags_parser(t_fmt *fmt, t_holder *holder);

#endif
