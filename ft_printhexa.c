/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:47:30 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 09:07:59 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_lower(void *x)
{
	return (ft_printbase((uintptr_t)x, "0123456789abcdef"));
}

int	ft_printhexa_upper(void *x)
{
	return (ft_printbase((uintptr_t)x, "0123456789ABCDEF"));
}
