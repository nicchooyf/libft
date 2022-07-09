/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:34:52 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/06 16:32:56 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	count;

	i = 0;
	if (!to_find[0])
		return ((char *)str);
	while (str[i] && i < len)
	{
		count = 0;
		while (str[i + count] == to_find[count] && (i + count) < len)
		{
			count++;
			if (count == ft_strlen(to_find))
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
