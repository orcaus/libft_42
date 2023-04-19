/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:46:20 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:46:22 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t y;
	const unsigned char	*sbis;

	y = 0;
	sbis = (const unsigned char *)s;
	while(y < n)
	{
		if(sbis[y] == (unsigned char)c)
			return ((void *)(s + y));
		y++;
	}
	return ((void *)NULL);
}
