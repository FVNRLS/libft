/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:56:32 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 17:17:10 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function void *memcpy(void *dest, const void *src, size_t n) 
copies n characters from memory area src to memory area dest.
This function returns a pointer to destination */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*char_src;
	char		*char_dst;

	char_src = src;
	char_dst = dst;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*char_dst = *char_src;
		char_dst++;
		char_src++;
		n--;
	}
	return (dst);
}
