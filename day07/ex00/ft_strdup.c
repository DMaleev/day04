/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 02:12:15 by dmalieie          #+#    #+#             */
/*   Updated: 2019/04/04 21:15:29 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*src_copy;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	src_copy = (char*)malloc(size + 1);
	while (src[i])
	{
		src_copy[i] = src[i];
		i++;
	}
	src_copy[i] = src[i];
	return (src_copy);
}
