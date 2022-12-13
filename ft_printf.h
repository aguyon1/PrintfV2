/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:46:27 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/12 23:32:02 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "Libft/libft.h"
#include <stdarg.h>

enum e_index_conversions{c, s};

typedef int (*putchar_ptr)(char, int fd);
typedef int (*putstr_ptr)(char *, int fd);

int	ft_printf(void);

#endif /* FT_PRINTF_H */
