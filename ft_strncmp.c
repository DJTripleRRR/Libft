/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:27:38 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 16:57:58 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = n;
	if (ft_strlen(s1) < n)
		len = ft_strlen(s1) + 1;
	return (ft_memcmp(s1, s2, len));
}
