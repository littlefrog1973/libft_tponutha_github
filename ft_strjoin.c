/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:13:07 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/29 15:01:02 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*sub_addstr(char *str, const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (*s1 || *s2)
	{
		str[i] = *s1 * (*s1 != 0) + *s2 * !(*s1 != 0);
		s2 += !(*s1 != 0);
		s1 += (*s1 != 0);
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(size);
	if (!str)
		return (NULL);
	str = sub_addstr(str, s1, s2);
	return (str);
}

/*
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
	(void)ac;
	char *a = ft_strjoin(NULL, av[2]);
	printf("%s + %s = %s\n",av[1],av[2],a);
	printf("%d\n", strcmp(a, "42"));
	free(a);
	return (0);
}
*/
