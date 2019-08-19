/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 16:30:09 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 16:53:14 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long int	i;
	int			plusminus;
	long int	result;

	i = 0;
	plusminus = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ' || str[i] == '0')
	{
		i++;
	}
	if (str[i] == '-')
		plusminus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		if ((((result * 10) + (str[i] - 48)) < result) && sign == 1)
			return (-1);
		if ((((result * 10) + (str[i] - 48)) < result) && sign == -1)
			return (0);
		i++;
	}
	return (result * plusminus);
}
