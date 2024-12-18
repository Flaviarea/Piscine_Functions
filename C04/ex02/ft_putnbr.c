/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:29:43 by frea              #+#    #+#             */
/*   Updated: 2024/10/23 13:43:43 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr (147483648);
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}
/*
int main(void)
{
    ft_putnbr(-2147483648); // Test with minimum int value
    write(1, "\n", 1); // New line for clarity
    ft_putnbr(42); // Test with a positive number
    write(1, "\n", 1);
    ft_putnbr(0); // Test with zero
    write(1, "\n", 1);
    return 0;
}
*/
