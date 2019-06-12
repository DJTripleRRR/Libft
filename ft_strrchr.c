/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:32:05 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/12 15:35:18 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	fndchr;

	i = strlen(s);
	fndchr = (char)c;
	if (fndchr = '\0')
	{
		return ((char*)s + i);
	}

	while (i >= 0)
	{
		if (s[i] == fndchr)
		{
			return ((char*)s + i);
		}
		i--;
	}
	return (NULL)
}
