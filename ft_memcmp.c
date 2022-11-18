/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:07:32 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 12:25:20 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function int memcmp(const void *str1, const void *str2, size_t n)) 
compares the first n bytes of memory area str1 and memory area str2.
1) if Return value < 0 then it indicates str1 is less than str2.
2) if Return value > 0 then it indicates str2 is less than str1.
3) if Return value = 0 then it indicates str1 is equal to str2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	size_t					dif;
	const unsigned char		*str1;
	const unsigned char		*str2;

	str1 = s1;
	str2 = s2;
	if (str1 == str2)
		return (0);
	i = 0;
	while (n > 0)
	{
		dif = str1[i] - str2[i];
		if (dif != 0)
			return (dif);
		i++;
		n--;
	}
	return (0);
}
