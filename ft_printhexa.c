/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:47:30 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 13:54:30 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_lower(va_list ap)
{
	return (ft_printbase(va_arg(ap, unsigned int), "0123456789abcdef"));
}

int	ft_printhexa_upper(va_list ap)
{
	return (ft_printbase(va_arg(ap, unsigned int), "0123456789ABCDEF"));
}
