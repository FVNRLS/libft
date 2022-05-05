/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:04:41 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/19 10:50:16 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ to each character of the string ’s’, and passing its
index as first argument to allocate mem for a new string resulting from 
successive applications of ’f’.
Returns the string created from the successive applications of ’f’.
Returns NULL if the allocation fails. */

#include "libft.h"

//apply changes from the function 'f' on every character n the string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
