/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:35:41 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 17:14:51 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int index;

	index = 0;
	if (s == NULL)
		return ;
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
}
