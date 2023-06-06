/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amennad <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 08:55:44 by amennad           #+#    #+#             */
/*   Updated: 2023/04/21 10:26:49 by amennad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*element;

	if (size == SIZE_MAX)
		count = 1;
	element = (void *) malloc(count * size);
	if (!element)
		return (NULL);
	ft_bzero(element, count * size);
	return ((void *) element);
}
