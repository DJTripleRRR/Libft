/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:14:15 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/27 14:41:21 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	len;

	i = ft_strlen(s);
	if (s = NULL)
	{
		return (NULL);
	}
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
	{
		s[i] = '\0';
		i--;
	}
	i = 0;
	len = ft_strlen(s);
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
	{
		i++;
	}
	return (ft_strsub(s, i, len);
}
