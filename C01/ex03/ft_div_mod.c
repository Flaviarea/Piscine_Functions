/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:03:05 by frea              #+#    #+#             */
/*   Updated: 2024/10/10 13:30:53 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;

	printf("Before: %d, %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("After: %d, %d\n", div, mod);
	return 0;
}*/
