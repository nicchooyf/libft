/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:23:21 by nchoo             #+#    #+#             */
/*   Updated: 2022/07/06 12:29:29 by nchoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tab(char *str, char c)
{
	int	i;
	int	count;
	int	check;

	count = 0;
	i = 0;
	check = 1;
	while (str[i])
	{
		if (check && !(str[i] == c))
		{
			count++;
			check = 0;
		}
		else if (!check && (str[i] == c))
			check = 1;
		i++;
	}
	return (count);
}

static char	*split_strdup(const char *s, char c)
{
	char	*tmp;
	char	*p;
	int		i;

	i = 0;
	while (s[i] && !(s[i] == c))
		i++;
	p = malloc(sizeof(char) * (i + 1));
	tmp = p;
	while (i-- > 0)
		*tmp++ = *(char *)s++;
	*tmp = '\0';
	return (p);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		count;
	int		check;

	if (!s)
		return (NULL);
	check = 1;
	count = count_tab((char *)s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (check && !(*s == c))
		{
			*tab++ = split_strdup(s, c);
			check = 0;
		}
		else if (!check && (*s == c))
			check = 1;
		s++;
	}
	*tab = 0;
	return (tab - count);
}
