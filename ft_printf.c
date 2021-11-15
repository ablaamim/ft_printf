/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:10:02 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/15 10:14:23 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

/*COUNT THE NUMBER OF CHARS IN HECADECIMALS*/

int	ft_hexlen(unsigned long n)
{
	int	size;

	size = 1;
	while (n >= 16)
	{
		size++;
		n = n / 16 ;
	}
	return (size);
}

/*	replaces the first 'n' characters with 'c' characters in our string */
static void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) b)[i] = c;
		i++;
	}
	return (b);
}

/*replaces characters with null characters '\0' in our string */
static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t memb, size_t size)
{
	 int 	* i;

/* 	allocate size 'memb' * 'size' bytes of memory to our variable 'i' */
	i = malloc(memb * size);
	if (i == 0)
		return (0);
/* 	use the bzero function to fill 'i' with null characters */
	ft_bzero(i, (memb * size));
	return (i);
}

static char	ft_hex_to_char(unsigned long long int n, int pxx)
{
	if (n < 10)
/* 	convert to char */
		return (n + 48);
	if (n >= 10)
	{
/* 	case %p or %x */
		if (pxx == 0 || pxx == 1)
/* 	convert to lowercase */
			return (n + 87);
/*	case% X */
		else
/* 	convert to uppercase */
			return (n + 55);
	}
	return (0);
}

/*CONVERSION*/
char	*ft_itoh(char *str, int size, unsigned long int n, int pxx)
{
	unsigned long int	div;

	div = 0;
	while (n != 0)
	{
/* 	selects the characters to be converted */
		div = n % 16 ;
		str[size--] = ft_hex_to_char(div, pxx);
/* 	searches for the next characters that will be converted */
		n = n / 16 ;
	}
	return (str);
}

static int	ft_convert_hex(unsigned long long int n, int pxx)
{
	int			size;
	static char	*str;

/* 	count the number of characters in our hexadecimal */
	size = ft_hexlen(n);
/* 	perform a clean allocation to our string */
	str = ft_calloc(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
/* 	converts our hexadecimal to char in order to write it */
	ft_itoh(str, size - 1, n, pxx);
/* 	if our argument is %p */
	if (pxx == 0)
	{
/* 	if there is no content in our string write "0x0" */
		if (str[size - 1] == '0' && size - 1 == 0)
			ft_printf("%s", "0x0");
/* 	if there is content in our string, we'll write "0x" and then our string */
		else
			ft_printf("0x%s", str);
	}
/* 	if our argument is %x or %X, we'll write our string */
	else
		ft_printf("%s", str);
	free(str);
	str = NULL;
	return (size);
}

static int	ft_intlen(long int n)
{
	int	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static int ft_putnbr(long int n)
{
	long	nb;

	nb = (long) n;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
	return(ft_intlen(nb));
}

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

static int	ft_select(char c, va_list args, int count)
{
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	if (c == 'p')
	{
		count += 2;
		count += ft_convert_hex(va_arg(args, unsigned long int), 0);
	}
/*	convert a string to hexadecimal */
	if (c == 'x')
		count += ft_convert_hex(va_arg(args, unsigned int), 1);
/* 	convert a string to hexadecimal */
	if (c == 'X')
		count += ft_convert_hex(va_arg(args, unsigned int), 2);
	if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_select(s[i], args, count);
		}
		else
		{
			count++;
			write(1, &s[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
