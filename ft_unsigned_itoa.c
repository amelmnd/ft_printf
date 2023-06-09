/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:09:32 by amennad           #+#    #+#             */
/*   Updated: 2023/06/09 16:24:19 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static int	ft_int_len(long int n)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*itoa_logic(long int n, int n_len, char *result)
{
	if (n < 0)
	{
		result[0] = '-';
		n = n * (-1);
	}
	while (n > 0)
	{
		result[n_len] = n % 10 + 48;
		n = n / 10;
		n_len--;
	}
	return (result);
}

char	*ft_unsigned_itoa(unsigned int n)
{
	int					n_len;
	char				*result;
	long unsigned int	nb;

	nb = n;
	n_len = ft_int_len(nb);
	result = malloc(sizeof(char) * (n_len + 1));
	if (!result)
		return (0);
	result[n_len--] = '\0';
	if (n == 0)
	{
		result[0] = 48;
	}
	else
		itoa_logic((long int)nb, n_len, result);
	return (result);
}

char	*ft_itoa(int n)
{
	int			n_len;
	char		*result;
	long int	nb;

	nb = n;
	n_len = ft_int_len(nb);
	result = malloc(sizeof(char) * (n_len + 1));
	if (!result)
		return (NULL);
	result[n_len--] = '\0';
	if (n == 0)
	{
		result[0] = 48;
	}
	else
		itoa_logic(nb, n_len, result);
	return (result);
}
