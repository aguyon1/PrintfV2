/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:27 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 09:36:02 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "Libft/libft.h"
#include <stdarg.h>
#include <stdio.h> //delete

typedef int (*ptr_fun)(void *);

/*intptr_t represents a signed integer where the bit-width is the same as a pointer*/
int	ft_printf(const char *format, ...);
int	ft_printchar(void *c);
int	ft_printstr(void *str);
int	ft_printbase(intptr_t n, char *base);
int	ft_printmemory(void *address);
int	ft_printsigned(void *n);
int	ft_printunsigned(void *u);
int	ft_printhexa_lower(void *x);
int	ft_printhexa_upper(void *x);

#endif /* FT_PRINTF_H */
