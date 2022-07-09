/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:36:29 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 22:24:29 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_count(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		res++;
		n *= -1;
	}
	while (n > 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*p;

	count = get_count(n);
	if (n == -2147483648)
		return (p = ft_strdup("-2147483648"));
	p = malloc((count + 1) * sizeof(char));
	if (!p)
		return (NULL);
	else if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		p[0] = '0';
	p[count] = '\0';
	while (n != 0)
	{
		p[--count] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
