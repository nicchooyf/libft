/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 11:08:49 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 11:20:08 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*d;
	unsigned char	*tmp;

	if (src == NULL && dest == NULL)
		return (NULL);
	i = -1;
	p = (unsigned char *) src;
	d = dest;
	tmp = d;
	while (++i < n)
		*tmp++ = *p++;
	return (d);
}
