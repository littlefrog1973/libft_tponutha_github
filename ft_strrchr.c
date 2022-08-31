/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:27:06 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/06 18:38:44 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	lastpos;

	lastpos = ft_strlen(str);
	if (!str)
		return (NULL);
	while (1)
	{
		if (str[lastpos] == ((char *)&c)[0])
			return ((char *)&str[lastpos]);
		if (!lastpos)
			break ;
		lastpos--;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s",ft_strrchr(av[1], av[2][0]));
	return 0;
}
*/