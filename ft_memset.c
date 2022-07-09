/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:23:49 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 11:26:11 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*tmp;

	i = -1;
	p = str;
	tmp = p;
	while (++i < n)
		*tmp++ = (unsigned char) c;
	return (p);
}
