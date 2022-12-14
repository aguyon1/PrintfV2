/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 08:59:36 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 09:04:19 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printmemory(void *address)
{
	if (!address)
		return (ft_printchar("(nil)"));
	return (ft_printstr("0x") + ft_printbase(((uintptr_t)address), "0123456789abcdef"));
}
// int main(void)
// {
// 	ft_printmemory(&main);
// 	printf("\n");
// 	printf("%p\n", &main);
// }