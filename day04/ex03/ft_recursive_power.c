/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:12:38 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/29 16:27:34 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power);

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 && nb > 0)
	{
		return (1);
	}
	if (power == 0 && nb < 0)
	{
		return (-1);
	}
	if (power % 2 == 0)
	{
		if (power == 2)
		{
			return (nb * nb);
		}
		return (ft_recursive_power(ft_recursive_power(nb, power / 2), 2));
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
