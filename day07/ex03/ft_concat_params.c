/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 21:59:59 by dmalieie          #+#    #+#             */
/*   Updated: 2019/04/04 22:00:08 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*(str + strlen) != '\0')
	{
		strlen++;
	}
	return (strlen);
}

void	cat_words(char *rtn_value, int argc, char **argv)
{
	int word_counter;
	int i;
	int char_counter;

	word_counter = 1;
	char_counter = 0;
	while (word_counter < argc)
	{
		i = 0;
		while (argv[word_counter][i])
		{
			rtn_value[char_counter] = argv[word_counter][i];
			char_counter++;
			i++;
		}
		if (word_counter + 1 != argc)
		{
			rtn_value[char_counter] = '\n';
			char_counter++;
		}
		else
			rtn_value[char_counter] = '\0';
		word_counter++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*rtn_value;
	int		word_counter;
	int		size;

	size = 0;
	word_counter = 1;
	while (word_counter < argc)
	{
		size = size + ft_strlen(argv[word_counter]) + 1;
		word_counter++;
	}
	rtn_value = (char*)malloc(sizeof(char) * size);
	cat_words(rtn_value, argc, argv);
	return (rtn_value);
}
