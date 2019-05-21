/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:33:25 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/21 12:37:36 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	int counter;
	int isequal;

	counter = 0;
	isequal = 0;
	while (s1[counter] != '\0' && s2[counter] != '\0')
	{
		isequal = 0;
		while (s1[counter] == s2[counter])
		{
			isequal = 1;
		}
		counter++;
	}
	return (isequal);
}
