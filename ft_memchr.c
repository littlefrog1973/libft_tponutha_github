/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:08:01 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/05 04:18:37 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t byte)
{
	size_t	i;

	if (!ptr)
		return (NULL);
	i = 0;
	while (i < byte)
	{
		if (((char *)ptr)[i] == ((char *)&c)[0])
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
