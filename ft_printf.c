/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:09:32 by amennad           #+#    #+#             */
/*   Updated: 2023/06/06 16:03:43 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_line(char check_char, va_list	args)
{
	if (check_char == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (check_char == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
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
			print_line(format[i + 1], args);
			i++;
		}
		else
			ft_putchar_fd(format[i], 1);
		i++;
	}

	return (length);
}


// void mdr_tibo_kastou(const char *str, ...)
// {
// 	int i;
// 	va_list args;

// 	va_start(args, format);
// 	i = -1;
// 	while(++i)
// 		if (str[i] == '%')
// 			handle_print(str[i + 1], args);
// 		else
// 			ft_putchar_fd(str[i], 1);
// }
// void handle_print(char c, va_list args)
// {
// 	if (c == 'c')
// 		write(1, va_arg(args, int), 1);
// // }
//return position du 1 caracte ok dans le string
// int	ft_str_index_str(const char *where, const char *what)
// {
// 	int	i;
// 	int	y;

// 	i = 0;
// 	if (!what[0] || !where[0])
// 		return (0);
// 	while (where[i])
// 	{
// 		y = 0;
// 		while (where[i + y] == what[y])
// 		{
// 			if (what[y + 1] == '\0')
// 			{
// 				return (i);
// 			}
// 			y++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }
// int	ft_str_index_chr(char *str, char c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < ft_strlen(str) && str[i] != '\0')
// 	{
// 		if (str[i] == c)
// 			return (i);
// 		i++;
// 	}
// 	return (-1);
// }