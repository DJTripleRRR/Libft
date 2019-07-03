/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 13:02:10 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 13:09:03 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cntchr(char const *s, char c)
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	if (!(s && c))
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			count++;
	}
	return (count);
}
