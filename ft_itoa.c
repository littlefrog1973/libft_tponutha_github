/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tponutha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:34:50 by tponutha          #+#    #+#             */
/*   Updated: 2022/08/08 14:58:03 by tponutha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sub_number_handle(int *nptr)
{
	int		temp;
	size_t	count;

	if (nptr[0] == 0)
		return (1);
	count = (nptr[0] < 0);
	if (nptr[0] < 0)
		nptr[0] *= -1;
	temp = nptr[0];
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	return (count);
}

static void	sub_assign_str(int n, int i, char *str)
{
	if (n >= 10)
		sub_assign_str(n / 10, i - 1, str);
	str[i] = "0123456789"[n % 10];
}

static char	*sub_int_min(void)
{
	char	*str;

	str = malloc(12);
	if (!str)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	_Bool	isneg;
	char	*str;
	size_t	size;

	if (n == -2147483648)
		return (sub_int_min());
	isneg = (n < 0);
	size = sub_number_handle(&n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (isneg)
		str[0] = '-';
	sub_assign_str(n, size - 1, str);
	str[size] = 0;
	return (str);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	char *a = ft_itoa(atoi(av[1]));
	printf("%s\n", a);
	free(a);
}
*/
