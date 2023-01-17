/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 14:16:30 by agladkov          #+#    #+#             */
/*   Updated: 2023/02/01 04:29:15 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*out;

	if (count * size < size)
		return (NULL);
	out = malloc(count * size);
	if (!out)
		return (NULL);
	ft_bzero(out, count);
	return (out);
}
