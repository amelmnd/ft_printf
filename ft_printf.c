/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:09:32 by amennad           #+#    #+#             */
/*   Updated: 2023/06/13 15:59:26 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	temp_str(char *fn, int *len)
{
	char	*str;

	str = fn;
	*len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	check_s(char *element, int *len)
{
	if (!element)
	{
		ft_putstr("(null)");
		*len += ft_strlen("(null)");
	}
	else
	{
		*len += ft_strlen(element);
		ft_putstr(element);
	}
}

void	convert_base(unsigned	int n, char *base, int *len)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (n >= 16)
		convert_base(n / len_base, base, len);
	ft_putchar(base[n % len_base]);

	*len = *len + 1;
}

void	ft_print_line(char check_char, va_list	args, int *len)
{
	if (check_char == 'c')
	{
		ft_putchar(va_arg(args, int));
		*len += 1;
	}
	if (check_char == 's')
		check_s(va_arg(args, char *), len);
	if (check_char == '%')
	{
		ft_putchar('%');
		*len += 1;
	}
	if (check_char == 'i' || check_char == 'd')
		temp_str(ft_itoa(va_arg(args, int)), len);
	if (check_char == 'u')
		temp_str(ft_unsigned_itoa(va_arg(args, int)), len);
	if (check_char == 'x')
		convert_base(va_arg(args, int), "0123456789abcdef", len);
	if (check_char == 'X')
		convert_base(va_arg(args, int), "0123456789ABCDEF", len);
}

int	ft_printf(const char	*format, ...)
{
	va_list	args;
	int		length;
	int		i;

	length = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		length++;
		if (format[i] == '%')
		{
			length--;
			ft_print_line(format[i + 1], args, &length);
			i++;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	// printf("length %d\n", length);
	return (length);
}
