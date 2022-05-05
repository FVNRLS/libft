/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:13:17 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 11:09:22 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory with malloc() and returns a new string, which is the result
of the concatenation of ’str1’ and ’str2’. 
Returns The new string / NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*join;
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
