/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:32:25 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/29 17:42:51 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int					i;
	const unsigned char	*check1;
	const unsigned char	*check2;

	check1 = str1;
	check2 = str2;
	i = 0;
	while (n > 0)
	{
		if (check1[i] != check2[i])
		{
			return (check1[i] - check2[i]);
		}
	}
	return (0);
}
