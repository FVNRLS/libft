/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:06:40 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 11:23:27 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* function memset copies a defined character to the first n characters of the 
string pointed to. This function returns a pointer to the memory area str. */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ch;

	ch = b;
	while (len > 0)
	{
		*ch = c;
		ch++;
		len--;
	}
	return (b);
}
