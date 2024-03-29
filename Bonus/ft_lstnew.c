/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:05:29 by styes             #+#    #+#             */
/*   Updated: 2022/11/10 17:45:43 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mandatory/libft.h"

/*Allocates (with malloc(3)) and returns a new
 * element.  The variable ’content’ is initialized
 * with the value of the parameter ’content’.  The
 * variable ’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr -> content = content;
	ptr -> next = NULL;
	return (ptr);
}
/*
int	main()
{
	t_list	*a = ft_lstnew("hello\n");
	printf("%s", a->content);
}
*/
