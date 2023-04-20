/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:41:41 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/19 14:41:43 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimaran(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*bon_port;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && ft_trimaran(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_trimaran(s1[end - 1], set))
		end--;
	bon_port = (char *)malloc(sizeof(char) * (end - start + 1));
	if (bon_port == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		bon_port[i++] = s1[start++];
	bon_port[i] = 0;
	return (bon_port);
}
