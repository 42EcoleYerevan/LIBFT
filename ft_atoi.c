/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:26:48 by agladkov          #+#    #+#             */
/*   Updated: 2023/01/30 16:10:32 by agladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	out;
	int	m;

	out = 0;
	m = 1;
	while ((*str > 7 && *str < 15) || *str == 32)
		str++;
	if (*str == '-')
	{
		m *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		out = out * 10 + *str - 48;
		str++;
	}
	return (out * m);
}
