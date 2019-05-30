/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:21:07 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/29 17:31:35 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		if (((unsigned const char *)str)[i] == (unsigned char)c)
		{
			return ((void *)&((unsigned const char *)str)[i]);
			n = 0;
		}
		i++;
	}
	return (NULL);
}
