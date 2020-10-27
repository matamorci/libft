/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftorrent <ftorrent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 12:20:28 by ftorrent          #+#    #+#             */
/*   Updated: 2020/10/27 13:57:28 by ftorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_is_negative(long *n, int *negative)
{
	if (*n < 0)
	{
		*n *= -1;
		*negative = 1;
	}
}

char			*ft_itoa(long n)
{
	long		mem;
	int			i;
	int			neg;
	char		*str;

	mem = n;
	i = 2;
	neg = 0;
	ft_is_negative(&n, &neg);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (mem /= 10)
		i++;
	i += neg;
	if (!(str = (char*)malloc(sizeof(char) * i)))
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
