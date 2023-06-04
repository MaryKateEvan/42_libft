/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mevangel <mevangel@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:52:00 by mevangel          #+#    #+#             */
/*   Updated: 2023/06/04 18:52:04 by mevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		num;
	int		sign;
	char	*ptr;

	num = 0;
	sign = 1;
	ptr = (char *)str;
	while (*ptr == 32 || *ptr == 9 || *ptr == 11
		|| *ptr == 13 || *ptr == 10 || *ptr == 12)
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign = sign * (-1);
		ptr++;
	}
	while (*ptr > 47 && *ptr < 58)
	{
		num = (num * 10) + (*ptr - '0');
		ptr++;
	}
	return (num * sign);
}
