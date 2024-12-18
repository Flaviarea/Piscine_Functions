/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:03:31 by frea              #+#    #+#             */
/*   Updated: 2024/10/23 16:03:33 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb) {
    if (nb < 0) {
        return 0; 
    }
    
    int result = 1;
    while (nb > 1) {
        result *= nb; 
        nb--; 
    }
    
    return result; 
}

int main() {
    int number = 5;
    int factorial = ft_iterative_factorial(number);
    printf("Factorial of %d is %d\n", number, factorial);
    return 0;
}

