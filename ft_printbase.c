/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:41:14 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 16:24:55 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printbase(__int128 n, char *base)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n < (__int128)ft_strlen(base))
		count += write(1, &base[n], 1);
	else
	{
		count += ft_printbase(n / ft_strlen(base), base);
		count += ft_printbase(n % ft_strlen(base), base);
	}
	return (count);
}
