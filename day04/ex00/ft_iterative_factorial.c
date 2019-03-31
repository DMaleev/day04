/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:11:52 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/29 14:30:48 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb);

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	while (--nb > 0)
	{
		res *= nb;
	}
	return (res);
}
