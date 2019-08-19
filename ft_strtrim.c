/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:14:15 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 17:10:51 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	min;
	int	max;
	int	len;

	min = 0;
	if (s == NULL)
		return (NULL);
	while (s[min] != '\0' && (s[min] == ' ' || s[min] == '\t' || s[min] == '\n'))
		min++;
	max = ft_strlen(s);
	while (min < max && (s[max - 1] == ' ' || s[max - 1] == '\t' || s[max - 1] == '\n'))
		max--;
	if (min == max)
		return (ft_strnew(1));
	len = max - min;
	return (ft_strsub(s, min, len));
}
