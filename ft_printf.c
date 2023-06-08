/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:09:32 by amennad           #+#    #+#             */
/*   Updated: 2023/06/08 10:13:36 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_line(char check_char, va_list	args, int *len)
{
	char	*str;

	if (check_char == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		*len = *len + 1;
	}
	if (check_char == 's')
	{
		str = va_arg(args, char *);
		ft_putstr_fd(str, 1);
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
		if (format[i] == '%')
		{
			print_line(format[i + 1], args, &length);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
		length++;
	}
	printf("len = %d\n", length);
	return (length);
}
