/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uns_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:24:06 by ldifino           #+#    #+#             */
/*   Updated: 2023/04/19 19:46:11 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_uns_putnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
		i += ft_uns_putnbr(nb / 10);
	i += ft_putchar(nb % 10 + 48);
	return (i);
}