/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:23 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 16:38:58 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	const void	*array[] = {&ft_printchar, &ft_printstr,
		&ft_printmemory, &ft_printsigned, &ft_printsigned, &ft_printunsigned,
		&ft_printhexa_lower, &ft_printhexa_upper, &😋};
	char		*str;
	int			count;
	char		*conv;

	va_start(ap, format);
	str = (char *)format;
	count = 0;
	conv = "cspdiuxX%";
	while (*str)
	{
		if (*str == '%' && ft_strchr(conv, *(str + 1)) && *(str + 1))
		{
			count += ((t_fun) array[ft_strchr(conv, *++str) - conv])(ap);
			str++;
		}
		else
			count += write(1, str++, 1);
	}
	va_end(ap);
	return (count);
}
