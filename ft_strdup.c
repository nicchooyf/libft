/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:17:43 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 13:22:55 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*p;
	int		len;
	int		i;

	i = -1;
	len = ft_strlen(src);
	p = (char *)malloc((len + 1) * (sizeof(char)));
	if (p == 0)
		return (NULL);
	while (src[++i])
		p[i] = src[i];
	p[i] = '\0';
	return (p);
}
