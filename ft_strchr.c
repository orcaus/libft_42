/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:48:01 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:48:04 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *p, int ch)
{
	char	c;
	int		count;

	count = 0;
	c = ch;
	while (p[count] != c)
	{
		if (p[count] == '\0')
			return (NULL);
		count++;
	}
	return ((char *)p + count);
}
