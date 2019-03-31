/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 15:04:21 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/30 15:30:22 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb);

int		ft_sqrt(int nb)
{
	int x;
	int max;

	x = nb / 2;
	while (x * x != nb && nb > 0)
	{
		if (x * x > nb || x * x < 0)
		{
			max = x * x;
			x = x / 2;
		}
		if (x * x < nb && x * x > 0)
		{
			while (x * x != max)
			{
				if (x * x == nb)
				{
					return (x);
				}
				x++;
			}
			return (0);
		}
	}
	return (0);
}
