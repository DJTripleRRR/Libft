/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 15:31:56 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/29 16:18:21 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*uc;
	size_t	i;

	uc = str;
	i = 0;
	while (n > 0)
	{
		uc[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (uc);
}
