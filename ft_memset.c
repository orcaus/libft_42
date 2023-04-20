/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:47:39 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:47:42 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*pasta;

	i = 0;
	pasta = s;
	while (i < n)
	{
		pasta[i] = c;
		i++;
	}
	s = pasta;
	return ((void *) s);
}
