/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:48:50 by frea              #+#    #+#             */
/*   Updated: 2024/10/14 22:25:54 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int main (void)
{
    int a;
    int b;

    a = 10;
    b = 5;
    
    int *point1 = &a;
    int *point2 = &b;
    
    printf("Before: %d, %d\n", a, b);
    
    ft_ultimate_div_mod(point1, point2);

	printf("After: %d, %d\n", a, b);
	return 0;
}*/
