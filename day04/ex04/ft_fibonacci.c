/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 00:31:21 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/30 01:04:32 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index);

int		ft_fibonacci(int index)
{
	if (index <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
