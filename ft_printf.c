/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:23 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 09:45:17 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	void	*array[] = {&ft_printchar, &ft_printstr, &ft_printmemory, &ft_printsigned, &ft_printsigned,&ft_printunsigned, &ft_printhexa_lower, &ft_printhexa_upper, &ft_printchar};
	size_t		i;
	int			count;
	char *conversions;

	va_start(ap, format);
	count = 0;
	i = 0;
	conversions = "cspdiuxX%";
	while (format[i])
	{
		if (format[i++] == '%' && ft_strchr(conversions, format[i]))
			count += (((ptr_fun) array[1])(va_arg(ap, void *)));
		else
			count += ft_printchar((void *)(intptr_t)(format[i++]));
	}
	va_end(ap);
	return (count);
}
/*ft_strchr(conversions, format[i++]) - conversions*/
int main(void)
{
	ft_printf("Salut");
	return (0);
}
