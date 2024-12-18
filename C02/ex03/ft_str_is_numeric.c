/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:49:02 by frea              #+#    #+#             */
/*   Updated: 2024/10/20 19:32:46 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
    char *str1 = "12345";
    char *str2 = "fgrtghe";
    char *str3 = ""; // Test with an empty string
    printf("Test 1: %d\n", ft_str_is_numeric(str1)); // Expected: 1
    printf("Test 2: %d\n", ft_str_is_numeric(str2)); // Expected: 0
    printf("Test 3: %d\n", ft_str_is_numeric(str3)); // Expected: 1
    return 0;
}*/
