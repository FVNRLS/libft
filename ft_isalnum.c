/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 10:37:32 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/25 10:31:22 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalnum() function checks whether the argument passed is an alphanumeric 
character (alphabet or number) or not.
https://www.programiz.com/c-programming/library-function/ctype.h/isalnum */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
