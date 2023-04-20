/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:46:50 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:46:52 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*destpasta;
	const char	*srcpasta;

	if (dest == (NULL) && src == NULL)
		return (NULL);
	i = 0;
	destpasta = dest;
	srcpasta = src;
	while (i < n)
	{
		destpasta[i] = srcpasta[i];
		i++;
	}
	dest = destpasta;
	return ((void *) dest);
}
