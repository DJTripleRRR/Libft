/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:16:08 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 13:21:14 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_itoa_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	size_t		len;
	char		*result;
	size_t		neg;
	size_t		sign;

	len = ft_itoa_len(n);
	neg = 0;
	sign = 1;
	if (!(result = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		neg = 1;
		sign = -1;
	}
	while (len > neg)
	{
		len--;
		result[len] = '0' + (n % 10) * sign;
		n = n / 10;
	}
	return (result);
}
