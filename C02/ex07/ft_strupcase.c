/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:09:17 by frea              #+#    #+#             */
/*   Updated: 2024/10/17 19:06:01 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() 
{ 
    char test1[] = "sweet!";
    char test2[] = "even sweeter";
// Test 1
    printf("Original: '%s', Converted: '%s'\n", test1, ft_strupcase(test1));

    // Test 2
    printf("Original: '%s', Converted: '%s'\n", test2, ft_strupcase(test2));
return 0;
}
*/
