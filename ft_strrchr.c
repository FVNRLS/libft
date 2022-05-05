/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 10:36:31 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 12:51:44 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function char *strrchr(const char *str, int c) searches for 
the last occurrence of the character c (an unsigned char) in the string pointed 
to, by the argument str.
This function returns a pointer to the last occurrence of character in str. 
If the value is not found, the function returns a null pointer.
*/

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == ch)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
