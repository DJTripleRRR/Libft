/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:06:56 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 17:04:02 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;

	if (!(mem = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(mem, (size + 1));
	return (mem);
}
