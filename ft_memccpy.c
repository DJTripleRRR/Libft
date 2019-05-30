/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:05:51 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/29 17:13:21 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && ((char *)str2)[i] != (unsigned char)c)
	{
		((char *)str1)[i] = ((char *)str2)[i];
		i++;
		n--;
	}
	return (str1);
}
