/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftorrent <ftorrent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 19:43:37 by ftorrent          #+#    #+#             */
/*   Updated: 2020/10/26 19:45:38 by ftorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			c;
	unsigned char	*p;

	c = 0;
	p = (unsigned char*)ptr;
	while (num > c)
	{
		p[c] = value;
		++c;
	}
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
