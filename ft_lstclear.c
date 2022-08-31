/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <tponutha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 08:31:09 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/30 11:50:39 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// del -> free content
// free -> free pointer

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*front;

	if (del)
	{
		while (lst[0])
		{
			front = lst[0]->next;
			ft_lstdelone(lst[0], del);
			lst[0] = front;
		}
	}
}
