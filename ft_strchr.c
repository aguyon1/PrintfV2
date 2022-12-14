/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:43:29 by aguyon            #+#    #+#             */
/*   Updated: 2022/12/14 15:56:26 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	int	size_s;
	int	i;

	size_s = ft_strlen(s) + 1;
	i = 0;
	while (size_s > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
		size_s--;
	}
	return (NULL);
}
// #include <stdio.h>
// int main(void)
// {
// 	char *str = "0abcdef";
// 	printf("%ld\n", ft_strchr(str, 'a') - str);
// }