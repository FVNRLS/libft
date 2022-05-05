/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:15:03 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 11:49:32 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function char *strchr(const char *str, int c) searches for the 
first occurrence of the character c (an unsigned char) in the string pointed 
to by the argument str. 
This returns a pointer to the first occurrence of the character c in the string 
str, or NULL if the character is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = c;
	i = 0;
	while (s[i] != '\0' || ch == '\0')
	{
		if (s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
