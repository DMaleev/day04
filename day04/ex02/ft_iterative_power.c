/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:46:01 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/29 16:11:10 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power);

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = nb;
	if (power < 0)
	{
		return 0;
	}
	while (++i != power)
	{
		result = result * nb;
	}
	return (result);
}
