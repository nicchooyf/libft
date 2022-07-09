/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:49:33 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/05 22:59:30 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		n;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	n = (int)ft_strlen(s);
	p = malloc(sizeof(char) * (n + 1));
	if (!p)
		return (NULL);
	while (n-- > 0)
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
