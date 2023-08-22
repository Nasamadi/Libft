/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:55:37 by nasamadi          #+#    #+#             */
/*   Updated: 2022/08/19 14:52:06 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str) + 1;
	if (c > 256)
		c %= 256;
	while (i--)
	{
		if (*(str + i) == c)
			return ((char *)(str + i));
	}
	return (0);
}
