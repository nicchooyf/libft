/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:47:44 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/06 23:11:21 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	n;

	c %= 128;
	n = ft_strlen(str);
	while (n >= 0)
	{
		if (str[n] == c)
			return ((char *)(str + n));
		n--;
	}
	return (NULL);
}
