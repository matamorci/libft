/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftorrent <ftorrent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:56:02 by ftorrent          #+#    #+#             */
/*   Updated: 2020/10/14 18:07:18 by ftorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;
	int		cont;

	cont = 0;
	if ((nitems * size) == 0)
		return (0);
	ptr = malloc(nitems * size);
	while ((size_t)cont < (nitems * size))
	{
		((char*)ptr)[cont] = 0;
		++cont;
	}
	return (ptr);
}
