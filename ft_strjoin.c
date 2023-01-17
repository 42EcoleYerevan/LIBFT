/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:16:09 by agladkov          #+#    #+#             */
/*   Updated: 2023/01/23 15:39:52 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	len;
	char	*out;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	out = (char *) malloc(len * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	j = 0;
	ft_strlcpy(out, s1, len);
	ft_strlcat(out, s2, len);
	return (out);
}
