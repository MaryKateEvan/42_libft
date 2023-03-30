/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:12:34 by mevangel          #+#    #+#             */
/*   Updated: 2023/03/29 12:20:58 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	in_len;

	in_len = ft_strlen(dst);
	if (ft_strlen(dst) > dstsize || dstsize == 0)
		return (dstsize + ft_strlen(src));
	d = ft_strlen(dst);
	s = 0;
	while (d < (dstsize - 1) && src[s])
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = 0;
	return (in_len + ft_strlen(src));
}
