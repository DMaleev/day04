/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:18:26 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/30 21:48:24 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb);

int		ft_is_prime(int nb)
{
	int n;

	if (nb < 0)
	{
		return (0);
	}
	while (n++ < nb)
	{
		if (nb % n == 0)
		{
			return (0);
		}
	}
	return (1);
}
