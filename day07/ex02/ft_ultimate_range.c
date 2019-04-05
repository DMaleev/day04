/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 04:04:57 by dmalieie          #+#    #+#             */
/*   Updated: 2019/04/04 04:57:12 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = 0;
	size = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int*)malloc(sizeof(int) * size);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}
