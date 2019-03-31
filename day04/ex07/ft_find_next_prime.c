/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalieie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:19:42 by dmalieie          #+#    #+#             */
/*   Updated: 2019/03/30 17:19:50 by dmalieie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int ft_find_next_prime(int nb);
 
 int ft_find_next_prime(int nb)
 {
     int i = nb+1;
     int k = 2;
     while(i<2*nb)
     {
        while(i % k != 0 && k < i)
        {
            k++;
        }
        if (k == i)
            return i;
        i++;
     }
 }
int main()
{
    printf("%d", ft_find_next_prime(79));

    return 0;
}

