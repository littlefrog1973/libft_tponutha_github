/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 02:17:17 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/05 04:58:55 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t	i;
	char	*m1;
	char	*m2;

	if (!p1 || !p2 || !n)
		return (0);
	i = 0;
	m1 = (char *)p1;
	m2 = (char *)p2;
	while (m1[i] == m2[i] && i < n)
		i++;
	return ((unsigned char)m1[i - (i == n)] - (unsigned char)m2[i - (i == n)]);
}
