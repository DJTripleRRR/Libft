/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:22:57 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 13:59:41 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	fndchr;

	i = 0;
	fndchr = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == fndchr)
		{
			return ((char*)s + i);
		}
		i++;
	}
	return (NULL);
}
