/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftorrent <ftorrent@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 13:08:33 by ftorrent          #+#    #+#             */
/*   Updated: 2020/10/27 11:51:03 by ftorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, int n)
{
	int		i;
	char	*des;
	char	*sr;

	i = 0;
	des = (char*)dest;
	sr = (char*)src;
	while (i < n)
	{
		des[i] = sr[i];
		if (sr[i] == c)
			return ((void*)(des + i + 1));
		++i;
	}
	return (0);
}
