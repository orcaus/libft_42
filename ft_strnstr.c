/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:50:17 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/13 14:50:19 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (big == NULL && len == 0)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && k < len)
	{
		while (big[i] && little[j] && big[i] == little[j] && (k + j) < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)big + i - j);
		}
		k++;
		i = k;
		j = 0;
	}
	return (NULL);
}
