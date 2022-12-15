/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:27 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/15 10:26:38 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdio.h> //delete

typedef int	(*t_fun)(va_list);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int	ft_printf(const char *format, ...);
int	ft_printchar(va_list ap);
int	ft_printstr(va_list ap);
int	ft_printbase(__int128 n, char *base);
int	ft_printmemory(va_list ap);
int	ft_printsigned(va_list ap);
int	ft_printunsigned(va_list ap);
int	ft_printhexa_lower(va_list ap);
int	ft_printhexa_upper(va_list ap);
int	ft_printpourcent(va_list ap);

#endif /* FT_PRINTF_H */
