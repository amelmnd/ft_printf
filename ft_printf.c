/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:09:32 by amennad           #+#    #+#             */
/*   Updated: 2023/06/09 16:57:27 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_print_line(char check_char, va_list	args, int *len)
{
	char	*str;

	if (check_char == 'c')
	{
		ft_putchar(va_arg(args, int));
		*len += 1;
	}
	if (check_char == 's')
	{
		str = va_arg(args, char *);
		if (!str)
		{
			ft_putstr("(null)");
			*len += ft_strlen("(null)");
		}
		else
		{
			*len += ft_strlen(str);
			ft_putstr(str);
		}
	}
	if (check_char == '%')
	{
		ft_putchar('%');
		*len += 1;
	}
	if (check_char == 'i' || check_char == 'd')
	{
		*len += ft_putnbr(va_arg(args, int)) + 1;
		// printf("len %d\n", *len);
	}
	if (check_char == 'u')
	{
		str = ft_unsigned_itoa(va_arg(args, int));
		*len += ft_strlen(str);
		ft_putstr(str);
		free(str);
	}
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
