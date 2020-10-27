/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftorrent <ftorrent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:11:43 by ftorrent          #+#    #+#             */
/*   Updated: 2020/10/27 11:47:03 by ftorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	c;
	char			*cpy;
	char			*pst;

	if (dest == 0 || src == 0)
		return (0);
	c = 0;
	cpy = (char*)src;
	pst = (char*)dest;
	while (c < n)
	{
		pst[c] = cpy[c];
		++c;
	}
	return (dest);
}
