/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 23:04:28 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/09 00:32:34 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// size + 1 because use of strlen only count
// how many charactors are, except counting 0
// so size = ft_strlen(str) + 1

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = 0;
	if (!src)
		return (NULL);
	while (src[size])
		size++;
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	size = 0;
	while (src[size] != 0)
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = 0;
	return (dest);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	char *b;
	b = ft_strdup(av[1]);
	printf("%s\n",b);
}
*/
