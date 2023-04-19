/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:46:34 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:46:36 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (*(unsigned char *)str1 != *(unsigned char *)str2)
		{
			return ((*(unsigned char *)str1) - (*(unsigned char *)str2));
		}
		i++;
		str1 = (unsigned char *)str1 + 1;
		str2 = (unsigned char *)str2 + 1;
	}
	return (0);
}
