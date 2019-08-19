/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:27:38 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 16:50:25 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t len;

	len = n;
	if (ft_strlen(s1) < n)
		len = ft_strlen(s1) + 1;
	return (ft_memcmp(s1, s2, len));
}
