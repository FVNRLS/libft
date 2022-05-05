/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:52:54 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 12:21:56 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function void *memmove(void *str1, const void *str2, size_t n) 
copies n characters from str2 to str1, but for overlapping memory blocks, 
memmove() is a safer approach than memcpy().
memmove allows to overlap on same memory.
This function returns a pointer to the destination, which is str1. */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*char_src;
	char		*char_dst;
	size_t		i;

	char_src = src;
	char_dst = dst;
	i = 0;
	if (src > dst)
	{
		while (len > i)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			len--;
			char_dst[len] = char_src[len];
		}
	}
	return (dst);
}
