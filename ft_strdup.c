/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:35:14 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 11:11:29 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Returns a pointer to a null-terminated byte string, which is a duplicate of
str pointed to by str. The returned pointer must be passed to free to 
avoid a memory leak.
If an error occurs, a null pointer is returned. */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
