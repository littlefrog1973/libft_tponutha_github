/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 01:30:16 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/05 01:41:44 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t byte)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < byte)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/*
#include <string.h>
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	int bit = atoi(av[1]);
	int bits = atoi(av[2]);
    int n = atoi(av[3]);

	int i = 0;
	int *a = malloc(7 * 4);
	a = memset(a, bit, bits);
    int *b = malloc(28);
    b = memcpy(b, a, n);
	printf("------------STD-------------\n");
	while (i < 7)
	{
		printf("%d.) %d\n", i, b[i]);
		i++;
	}
	printf("------------USR-------------\n");
    i = 0;
    int *c = malloc(28);
    c = memcpy(c, a, n);
	while (i < 7)
	{
		printf("%d.) %d\n", i, c[i]);
		i++;
	}
    free(a);
	free(b);
	free(c);
	return (0);
}
*/
