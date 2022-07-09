/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:28:42 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/04 15:14:29 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	slen;
	size_t	dlen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	n = dlen;
	if (size <= dlen)
		return (slen + size);
	while (src[i] && n < (size - 1))
		dst[n++] = src[i++];
	dst[n] = '\0';
	return (dlen + slen);
}
