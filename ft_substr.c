/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:27:00 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/29 14:58:34 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*d;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = (size_t)start;
	if (i > slen)
		return (ft_calloc(1, sizeof(char)));
	len = len * (len + i <= slen) + (slen - i) * (len + i > slen);
	d = malloc(len + 1);
	if (d)
		(void)ft_strlcpy(d, &s[i], len + 1);
	return (d);
}

/*#include <stdio.h>#include <string.h>
int main(int ac, char **av)
{
	(void)ac;
	char *ab;
	ab = ft_substr("BONJOUR LES HAIRCOTS !", atoi(av[2]), atoi(av[3]));
	printf("%s [%d,%d] --> %s\n", "BONJOUR LES HAIRCOTS !",
	atoi(av[2]), atoi(av[3]), ab);
	free(ab);return (0);
}*/
