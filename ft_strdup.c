/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:11:46 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/12 13:51:04 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

char	*ft_strdup(const char s1*)
{
	/* Declare viariables */
	*char	s2;
	int		i;

	i = 0;
	/* Set destination str to size of source str using malloc */
	s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	/* Add exception for if destination str in null */
	if (s2 = NULL)
	{
		return (NULL);
	}
	/* Set destination string to source string */
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = s1[i];
	/* Return destination string */
	return (s2);
}
