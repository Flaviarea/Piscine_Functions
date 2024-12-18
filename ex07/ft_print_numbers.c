/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:31:15 by frea              #+#    #+#             */
/*   Updated: 2024/11/07 15:31:27 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
	{
		write (1, &c, 1);
	}
	
void	ft_print_numbers(void)
{
	int	i;
	
	i = 0;
	while(i <= 9)
	{
		ft_putchar(i + '0');
		i++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
