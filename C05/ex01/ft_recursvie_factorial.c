/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursvie_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:06:09 by frea              #+#    #+#             */
/*   Updated: 2024/10/23 16:06:16 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if (nb < 0) {
        return 0; // Return 0 for invalid arguments
    }
    
    int result = 1;
    int current = nb;
    
    while (current > 1) {
        result *= current; // Multiply result by current
        current--; // Decrement current
    }
    
    return result; // Return the calculated factorial
}

int main() {
    int number = 5;
    int factorial = ft_recursive_factorial(number);
    printf("Factorial of %d is %d\n", number, factorial);
    return 0;
}

