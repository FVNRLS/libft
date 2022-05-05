/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:03:11 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 11:03:56 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strlen() function takes a string as an argument and returns its length. 
The returned value is of type size_t (the unsigned integer type).*/

#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
