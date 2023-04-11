/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 00:30:03 by mevangel          #+#    #+#             */
/*   Updated: 2023/04/11 19:30:30 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num != 0 && (num * size) / num != size)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
