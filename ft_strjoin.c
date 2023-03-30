/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:58:51 by mevangel          #+#    #+#             */
/*   Updated: 2023/03/27 17:44:50 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*cp_s1;

	cp_s1 = (char *)s1;
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, cp_s1, ft_strlen(cp_s1) + 1);
	ft_strlcat(new, s2, (ft_strlen(cp_s1) + ft_strlen(s2) + 1));
	return (new);
}
