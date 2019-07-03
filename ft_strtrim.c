/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:14:15 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 14:25:08 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	len;

	i = ft_strlen(s);
	if (!(s))
		return (NULL);
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i--;
	len = i;
	i = 0;
	while ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	return (ft_strsub(s, i, len));
}
