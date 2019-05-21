/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:50:37 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/21 13:16:26 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int counter;
	int isequal;

	counter = 0;
	isequal = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0' && n > 0)
	{
		isequal = 0;
		while (s1[counter] == s2[counter])
		{
			isequal = 1;
		}
		counter++;
		n--;
	}
	return (isequal);
}
