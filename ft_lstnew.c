/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmazurit <rmazurit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:50:18 by rmazurit          #+#    #+#             */
/*   Updated: 2022/04/29 12:49:43 by rmazurit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates memory and returns a new node (list). The member variable 
’content’ is initialized with the value of the parameter ’content’. 
The variable ’next’ is initialized to NULL. */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
