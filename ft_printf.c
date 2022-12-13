/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:23 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/13 10:13:08 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list ap;
	const void *array[] = {&ft_putchar_fd, &ft_putstr_fd};
	size_t i;
	int count;

	va_start(ap, str);
	count = 0;
	i = 0;
	while (str[i])

	return (0);
}

int main(void)
{
	ft_printf();
	return (0);
}
