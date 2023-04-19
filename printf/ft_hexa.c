/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldifino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 14:17:21 by ldifino           #+#    #+#             */
/*   Updated: 2023/04/19 12:38:02 by ldifino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int nb, char *str)
{
	int	i;

	i = 0;
	if (nb >= 16)
		i += ft_hexa(nb / 16, str);
	i += ft_hexa(str[nb % 16], str);
	return (i);
}
