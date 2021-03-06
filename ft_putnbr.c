/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:19:27 by dmoetana          #+#    #+#             */
/*   Updated: 2018/06/06 10:19:34 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	lngnbr;

	lngnbr = (long)n;
	if (lngnbr < 0)
	{
		ft_putchar('-');
		lngnbr *= -1;
	}
	if (lngnbr >= 10)
	{
		ft_putnbr(lngnbr / 10);
		ft_putnbr(lngnbr % 10);
	}
	else
	{
		ft_putchar(lngnbr + '0');
	}
}
