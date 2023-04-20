/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:30:22 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/19 16:30:24 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*gros_join;

	s2_len = ft_strlen(s2);
	s1_len = ft_strlen(s1);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	gros_join = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (gros_join == NULL)
		return (NULL);
	ft_strlcpy(gros_join, s1, s1_len + 1);
	ft_strlcat(gros_join, s2, s1_len + s2_len + 1);
	return (gros_join);
}
