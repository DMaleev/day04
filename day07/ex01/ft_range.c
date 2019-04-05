/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 03:19:38 by dmalieie          #+#    #+#             */
/*   Updated: 2019/04/04 04:00:53 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*int_array;
	int		i;
	int		size;

	size = max - min;
	if (size <= 0)
	{
		int_array = NULL;
		return (int_array);
	}
	i = 0;
	int_array = (int*)malloc(4 * size);
	while (min < max)
	{
		int_array[i] = min;
		min++;
		i++;
	}
	return (int_array);
}
