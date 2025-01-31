/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:21:05 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/29 16:40:57 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int nbyte)
{
	int	i;

	i = 0;
	while (nbyte > 0)
	{
		((char *)s)[i] = 0;
		i++;
		nbyte--;
	}
}
