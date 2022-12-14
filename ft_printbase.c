/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:41:14 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 08:55:45 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printbase(intptr_t n, char *base)
{
	int count;

	count = 0;
	if (n < 0)
	{
		count += ft_printchar((void *)'-');
		n = -n;
	}
	if (n < (intptr_t)ft_strlen(base))
		count += ft_printchar(&(base[n]));
	else
	{
		ft_printbase(n / ft_strlen(base), base);
		ft_printbase(n % ft_strlen(base), base);
	}
	return (count);
}