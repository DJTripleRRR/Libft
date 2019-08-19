/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:42:43 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 15:54:07 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] != '\0')
	{
		if (n > 0)
		{
			s1[i] = s2[j];
			j++;
			i++;
			n--;
		}
		else
			break ;
	}
	s1[i] = '\0';
	return (s1);
}
