/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:09:03 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/27 04:29:54 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (str[0])
	{
		if (str[0] == ((char *)&c)[0])
			return ((char *)str);
		str++;
	}
	if (str[0] == ((char *)&c)[0])
		return ((char *)str);
	return (NULL);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%s",ft_strchr(av[1], 't' + 256));
	return 0;
}
*/