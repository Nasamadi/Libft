/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 02:11:33 by nasamadi          #+#    #+#             */
/*   Updated: 2022/08/05 03:39:59 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnum(int n)
{
	size_t	len;
	long	num;

	len = 0;
	num = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		num *= -1;
	}
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		i;

	num = (long)n;
	i = ft_countnum(n) - 1;
	str = (char *)malloc(sizeof(char) * (ft_countnum(n) + 1));
	if (str == 0)
		return (NULL);
	if (n == -2147483648)
		num = 2147483648;
	else if (num < 0)
		num *= -1;
	str[ft_countnum(n)] = '\0';
	while (i >= 0)
	{
		str[i] = (num % 10) + 48;
		num = num / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
