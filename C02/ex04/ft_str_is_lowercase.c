/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:57:27 by frea              #+#    #+#             */
/*   Updated: 2024/10/20 19:34:58 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
    char *str1 = "hello";      // Only lowercase
    char *str2 = "Hello";      // Contains uppercase
    char *str3 = "";           // Empty string
    char *str4 = "abc123";     // Contains non-lowercase characters

    printf("Test 1: %d\n", ft_str_is_lowercase(str1)); // Expected: 1
    printf("Test 2: %d\n", ft_str_is_lowercase(str2)); // Expected: 0
    printf("Test 3: %d\n", ft_str_is_lowercase(str3)); // Expected: 1
    printf("Test 4: %d\n", ft_str_is_lowercase(str4)); // Expected: 0

    return 0;
}*/
