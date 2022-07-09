/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:14:09 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 18:21:03 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s, const char *s2)
{
	size_t	n;
	size_t	i;
	char	*tmp;
	char	*p;

	if (!s || !s2)
		return (NULL);
	n = ft_strlen(s);
	i = 0;
	p = malloc(sizeof(char) * (n + ft_strlen(s2) + 1));
	if (!p)
		return (NULL);
	tmp = p;
	while (*s)
		*tmp++ = *s++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (p);
}
