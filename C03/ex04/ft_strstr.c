/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:42:38 by frea              #+#    #+#             */
/*   Updated: 2024/10/21 17:42:42 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, str + i, 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Findth.is in this";
	char	to_find[] = "this";

	char *result = ft_strstr(str, to_find);
	if (result) 
	{
	ft_putstr("Substring found: ");
        ft_putstr(result); // Print the found substring
        ft_putstr("\n"); // New line for better readability
    	} 
    	else 
    {
        ft_putstr("Substring not found\n");
    }

    return 0;
}
*/
