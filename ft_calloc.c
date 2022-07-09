/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:56:40 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/07 21:06:32 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*res;
	size_t	i;

	if (n >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	i = (n * size);
	res = malloc(n * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, i);
	return (res);
}
