/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:14:06 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/27 13:29:11 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (s && start && len)
	{
		if ((!(mem = (char*)sizeof(len))) || (start > ft_strlen(s - 1)))
		{
			return (NULL);
		}
		while (i <= len || s[i] != '\0')
		{
			mem[i] = s[start];
			i++;
			start++;
		}
		if (s[start] = '\0')
		{
			mem[i] = s[start];
		}
	}
	return (mem);
}
