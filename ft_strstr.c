/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:37:25 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/12 16:18:47 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] = '\0')
	{
		return ((char*)haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] = needle[j])
		{
			while (needle[j] == haystack[i + j])
			{
				if (needle[j + i] == '\0')
				{
					return ((char *)haystack + i);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
