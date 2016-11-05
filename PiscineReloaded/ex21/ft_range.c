/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:12:15 by nmanon            #+#    #+#             */
/*   Updated: 2016/11/05 04:12:16 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min < max)
	{
		if ((tab = (int *)malloc(sizeof(int) * (max - min))))
		{
			i = 0;
			while (min < max)
			{
				tab[i] = min;
				i++;
				min++;
			}
			return (tab);
		}
	}
	return (0);
}
