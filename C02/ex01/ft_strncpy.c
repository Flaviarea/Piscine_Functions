/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:19:41 by frea              #+#    #+#             */
/*   Updated: 2024/10/17 18:43:28 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char dest[50];
	// Test 1: src longer than n
    ft_strncpy(dest, "Hello, World!", 5);
    printf("Result: '%s' (Expected: 'Hello')\n", dest);

    // Test 2: src shorter than n
    ft_strncpy(dest, "Hi", 5);
    printf("Result: '%s' (Expected: 'Hi')\n", dest);

    // Test 3: src exactly n characters long
    ft_strncpy(dest, "Hello", 5);
    printf("Result: '%s' (Expected: 'Hello')\n", dest);

    // Test 4: Empty src
    ft_strncpy(dest, "", 5);
    printf("Result: '%s' (Expected: '')\n", dest);

    // Test 5: n is 0
    ft_strncpy(dest, "Hello", 0);
    printf("Result: '%s' (Expected: '')\n", dest);

    // Test 6: Large n
    ft_strncpy(dest, "Hello, World!", 50);
    printf("Result: '%s' (Expected: 'Hello, World!')\n", dest);
}
    return 0;
}
*/
