/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:56:12 by mevangel          #+#    #+#             */
/*   Updated: 2023/04/02 01:53:58 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>

//i'll need strchr to check the existence of char c
// and substr to place each substring to the 2D array, char**

//maybe one separate function to find all the start points of substrings?

size_t	ft_num_substrings(char const *s, char c)
{
	size_t	num;
	size_t	i;
	size_t	found_c;

	num = 0;
	i = 0;
	found_c = 0;

	while (s[i])
	{
		if (s[i] != c && found_c == 0)
		{
			num++;
			found_c = 1;
		}
		else if (s[i] == c)
			found_c = 0;
		i++;
	}
	/*while ()
	{
		
	}

	*/
	return (num);
}

// char	**ft_split(char const *s, char c)
// {
	
// }
#include <stdio.h>

int main(void)
{
	char str[] = " Hello world! Mary Kate here trying to survive the night! ";
	char strb[] = "Hello world! Mary Kate here trying to survive the night! ";
	printf("I found %zu substrings/words\n", ft_num_substrings(str, 32));
	printf("B: I found %zu substrings/words\n", ft_num_substrings(strb, 32));
	return 0;
}
