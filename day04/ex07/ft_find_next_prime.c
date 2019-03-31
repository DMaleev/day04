/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:19:42 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/30 22:05:31 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb);

int		ft_find_next_prime(int nb)
{
	int i;
	int k;

	i = nb + 1;
	k = 2;
	while (i < 2 * nb)
	{
		while (i % k != 0 && k < i)
		{
			k++;
		}
		if (k == i)
		{
			return (i);
		}
		i++;
	}
}
