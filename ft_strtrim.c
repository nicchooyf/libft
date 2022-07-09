/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:19:34 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/07 12:32:54 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char(char s, const char *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (s == set[i])
			return (1);
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	k;
	size_t	i;
	size_t	j;
	char	*p;

	if (!s || !set)
		return (NULL);
	k = 0;
	i = 0;
	j = ft_strlen(s);
	while (s[i] && i < j
		&& ((is_char(s[i], set)) || (is_char(s[j - 1], set))))
	{
		if (is_char(s[i], set) == 1)
			i++;
		if (is_char(s[j - 1], set) == 1)
			j--;
	}
	p = malloc(sizeof(char) * (j - i + 1));
	if (!p)
		return (NULL);
	while (i < j)
		p[k++] = s[i++];
	p[k] = '\0';
	return (p);
}
