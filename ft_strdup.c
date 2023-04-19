/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:48:19 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:48:21 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

size_t ft_strlen_strdup(const char *s)
{
	size_t i;
	
	i = 0;
	while (s[i])
		i++;
	return(i);
}

void *ft_memcpy_strdup(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destpasta;
	const char	*srcpasta;
	
	i = 0;
	destpasta = dest;
	srcpasta = src;
	while (i < n)
	{
		destpasta[i] = srcpasta[i];
		i++;
	}
	dest = destpasta;
	return((void *) dest);
}

char *ft_strdup(const char *s)
{
	char *result;
	size_t i;
	
	i = ft_strlen_strdup(s);
	result = (char *) malloc(i + 1);
	
	if (result != NULL)
	{
		ft_memcpy_strdup(result, s, i + 1);
	}
	return((char *) result);
}
