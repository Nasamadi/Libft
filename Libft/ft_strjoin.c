/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 04:48:07 by nasamadi          #+#    #+#             */
/*   Updated: 2022/08/23 01:57:00 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			i_join;
	char		*join;

	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s1 || !s2 || !(join))
		return (NULL);
	i = 0;
	i_join = 0;
	while (s1[i])
		join[i_join++] = s1[i++];
	i = 0;
	while (s2[i])
		join[i_join++] = s2[i++];
	join[i_join] = '\0';
	return (join);
}
