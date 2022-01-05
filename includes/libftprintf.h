/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:41:18 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/05 18:12:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"

# define HOLDER_ALL_CONVERSIONS "cspdiuxX%"
# define HOLDER_ALL_FLAGS "-0# +"
# define HOLDER_LEFT_JUSTIFY '-'
# define HOLDER_PREFIX "# +"
# define HOLDER_PADDING '0'
# define HOLDER_PRECISION '.'

# define DECIMAL_BASE "0123456789"
# define HEXA_UPPER_BASE "0123456789ABCDEF"
# define HEXA_LOWER_BASE "0123456789abcdef"

# define POINTER_AND_HEXAL_PREFIX "0x"
# define HEXAU_PREFIX "0X"

# define IS_MINUS '-'
# define IS_PLUS '+'
# define IS_SPACE ' '

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

t_fmt		*ft_initialize_fmt(const char *format, va_list ap);
t_holder	*ft_initialize_holder(void);

// PLACEHOLDERS MANAGEMENT AND PARSING

void		ft_placeholders_manager(t_fmt *fmt);
void		*ft_parsing(t_fmt *fmt, t_holder *holder);
void		ft_flags_parser(t_fmt *fmt, t_holder *holder);
void		ft_width_parser(t_fmt *fmt, t_holder *holder);
void		ft_precision_parser(t_fmt *fmt, t_holder *holder);
void		ft_conversion_parser(t_fmt *fmt, t_holder *holder);

// CONVERSIONS

void	ft_conversion_types(t_fmt *fmt, t_holder *holder);
void	ft_type_char(t_fmt *fmt, t_holder *holder);
void	ft_type_str(t_fmt *fmt, t_holder *holder);
void	ft_type_digit(t_fmt *fmt, t_holder *holder);

// CONVERSION SUBFUNCTIONS
void		ft_padding_left(char **src, char padding, int width);
void		ft_padding_right(char **src, char padding, int width);
void		ft_digit_width(t_fmt *fmt, int sign);
void		ft_add_prefix(t_holder	*holder, int sign);

#endif
