/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:50:31 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:50:33 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen_strrchr(const char *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *p, int ch)
{
	char	c;
	int		count;

	c = ch;
	count = ft_strlen_strrchr(p);
	while (1)
	{
		if (p[count] == c)
			return ((char *) p + count);
		if (count == 0)
			return (NULL);
		count--;
	}
}
