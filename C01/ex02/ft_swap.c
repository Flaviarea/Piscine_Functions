/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:17:15 by frea              #+#    #+#             */
/*   Updated: 2024/10/14 21:59:54 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*#include <stdio.h>
int 	main(void)
{
	int a;
	int b;
	a = 10;
	b = 5;
	printf("%d\n", a);
	printf("%d\n", b);
	
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
}*/
