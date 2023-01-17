/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 02:02:10 by agladkov          #+#    #+#             */
/*   Updated: 2023/02/01 02:02:16 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	isin(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	char	*tmp;

	while (isin(set, *s1))
		s1++;
	tmp = (char *) s1;
	while (*(s1 + 1))
		s1++;
	while (isin(set, *s1))
		s1--;
	out = (char *)malloc(s1 - tmp + 2);
	if (!out)
		return (NULL);
	ft_strlcpy(out, tmp, s1 - tmp + 2);
	return (out);
}
