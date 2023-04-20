/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srajaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:34:54 by srajaoui          #+#    #+#             */
/*   Updated: 2023/04/19 15:34:56 by srajaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_rtn(unsigned int nbpos, int fd)
{
	char	p;

	if (nbpos == 0)
	{
		return ;
	}
	ft_putnbr_rtn(nbpos / 10, fd);
	p = nbpos % 10 + '0';
	write(fd, &p, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbpos;

	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nbpos = -nb;
	}
	else
	{
		nbpos = nb;
	}
	ft_putnbr_rtn(nbpos, fd);
}
