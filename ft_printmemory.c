/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:59:36 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 16:44:14 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printmemory(va_list ap)
{
	void	*address;

	address = va_arg(ap, void *);
	if (!address)
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2)
		+ ft_printbase((uintptr_t)address, "0123456789abcdef"));
}
