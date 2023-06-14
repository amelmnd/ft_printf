/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:09:35 by amennad           #+#    #+#             */
/*   Updated: 2023/06/14 10:39:41 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> //a delete
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *str);
void	ft_putnbr(int n);
char	*ft_itoa(int n);
char	*ft_unsigned_itoa(unsigned int n);
void	check_c(char c, int *len);
void	check_s(char *element, int *len);
void	temp_str(char *fn, int *len);
void	convert_base_x(unsigned int n, char *base, int *len);
void	convert_base_p(unsigned long int n, int *len);

#endif