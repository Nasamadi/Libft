/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:25:44 by nasamadi          #+#    #+#             */
/*   Updated: 2022/08/23 01:55:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*desti;
	const char	*s;

	i = 0;
	desti = dest;
	s = src;
	while (i < n)
	{
		desti[i] = s[i];
		i++;
	}
	return (dest);
}
