/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:33:48 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 12:57:39 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory with malloc() and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
Returns The substring / NULL if the allocation fails. */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size > len)
		size = len;
	sub = malloc(sizeof(char) * (size + 1));
	if (!sub)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
			sub[j++] = s[i];
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
