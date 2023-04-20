/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:48:41 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:48:43 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	size_t	dest_i;
	size_t	src_i;
	size_t	i;

	if ((dest == NULL) && (count == 0))
		return (0);
	dest_i = ft_strlen(dest);
	src_i = ft_strlen(src);
	if (count == 0 || dest_i >= count)
		return (src_i + count);
	i = 0;
	while (src[i] && (i + dest_i + 1 < count))
	{
		dest[dest_i + i] = src[i];
		i++;
	}
	dest[dest_i + i] = '\0';
	return (dest_i + src_i);
}
