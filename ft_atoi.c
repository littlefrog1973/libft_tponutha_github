/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <tponutha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:50:43 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/30 11:46:07 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
1 : find ptr of first char that isn't whitespace
2 : check for notation, if yes then shift ptr by one
3 : find length of convertable part of str
4 : convert it by sum
5 : power ten by bityshift -> 10n = n<<3 + n<<1
*/

static _Bool	sub_is_negative(const char **str)
{
	register _Bool	neg;

	neg = 0;
	while ((str[0][0] >= '\t' && str[0][0] <= '\r') || str[0][0] == ' ')
		str[0]++;
	if (str[0][0] == '+' || str[0][0] == '-')
	{
		neg = (str[0][0] == '-');
		str[0]++;
	}
	return (neg);
}

static size_t	sub_atoilen(const char *str)
{
	register size_t	len;

	len = 0;
	while (ft_isdigit(str[len]))
		len++;
	return (len);
}

// num[0] -> sum, num[1] -> cmp, num[2] -> decimal

int	ft_atoi(const char *str)
{
	register _Bool	neg;
	register size_t	len;
	long			num[3];

	if (!str)
		return (0);
	num[0] = 0;
	num[2] = 1;
	neg = sub_is_negative(&str);
	len = sub_atoilen(str);
	while (len)
	{
		num[1] = num[0];
		num[0] += (str[len - 1] - '0') * (num[2]);
		if (num[0] < num[1])
			return (-1 * !neg);
		num[2] = (num[2] << 3) + (num[2] << 1);
		len--;
	}
	if (neg)
		return (~((int *)&num[0])[0] + 1);
	return (((int *)&num[0])[0]);
}

/*
#include <stdio.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("STD : %d\n", atoi(av[1]));
	printf("USR : %ld\n", fgt_atoi(av[1]));
	return (0);
}
*/