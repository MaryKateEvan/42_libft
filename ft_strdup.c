/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 01:32:42 by mevangel          #+#    #+#             */
/*   Updated: 2023/03/30 19:42:43 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cp;

	cp = malloc(ft_strlen(str) + 1);
	if (cp == NULL)
		return (NULL);
	ft_strlcpy(cp, str, (ft_strlen(str) + 1));
	return (cp);
}
