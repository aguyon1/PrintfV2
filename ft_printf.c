/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:23 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/15 10:37:23 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	int			count;
	const void	*array[] = {&ft_printchar, &ft_printstr,
		&ft_printmemory, &ft_printsigned, &ft_printsigned, &ft_printunsigned,
		&ft_printhexa_lower, &ft_printhexa_upper, &ft_printpourcent};
	const char	*conv = "cspdiuxX%";

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && ft_strchr(conv, *(format + 1)) && *(format + 1))
			count += ((t_fun) array[ft_strchr(conv, *++format) - conv])(ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
