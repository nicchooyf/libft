/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:13:16 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/06 18:46:51 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// [---str1---]
// 		[---str2---]
//
// [---str2---]
// 		[---str1---]

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	if (!str1 && !str2)
		return (NULL);
	tmp = str1;
	tmp2 = (unsigned char *)str2;
	if (str2 > str1)
	{
		while (n-- > 0)
			*tmp++ = *tmp2++;
	}
	else
	{
		while (n-- > 0)
			tmp[n] = tmp2[n];
	}
	return (str1);
}
