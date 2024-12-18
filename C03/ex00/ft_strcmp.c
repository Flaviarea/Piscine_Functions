/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:55:25 by frea              #+#    #+#             */
/*   Updated: 2024/10/21 14:55:27 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
int main(void)
{
    char s1[] = "cia";
    char s2[] = "ciaone2";
    
    int result = ft_strcmp(s1, s2);
    if (result < 0)
        write(1, "-1", 2);
    else if (result > 0)
        write(1, "1", 1); 
    else
        write(1, "0", 1); 
    return 0;
}
*/
