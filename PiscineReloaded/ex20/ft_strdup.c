/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmanon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 04:09:39 by nmanon            #+#    #+#             */
/*   Updated: 2016/11/05 04:09:40 by nmanon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	i = 0;
	if ((ret = (char *)malloc(ft_strlen(str) + 1)))
	{
		while (str[i] != '\0')
		{
			ret[i] = str[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	return (0);
}
