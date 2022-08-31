/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:01:38 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/04 23:45:20 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t byte)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0 + (byte - 1) * (dst > src);
	while (i < byte)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i += 1 + -2 * (dst > src);
		if (i == 0)
		{
			((char *)dst)[0] = ((char *)src)[0];
			break ;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main()
{
	char *a = malloc(10);

	a = ft_memset(a, 4, 10);
	a = ft_memset(a, 3, 5);
	for (int i = 0; i < 10; i++)
	{
		printf("%d.) %d\n", i, a[i]);
	}
	printf("----------------------------\n");
	ft_memmove(a, a + 4, 4);
	for (int i = 0; i < 10; i++)
	{
		printf("%d.) %d\n", i, a[i]);
	}
	return (0);
}
*/