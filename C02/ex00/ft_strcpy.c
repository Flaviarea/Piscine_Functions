/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:18:03 by frea              #+#    #+#             */
/*   Updated: 2024/10/17 18:41:51 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 	ft_strcpy: string copy
**	Copies the string 'src' to 'dest' including the null terminator.
**	buffer ovberflaw issues may occure, if 'dest' is not large enough.
**	it returns 'dest'
*/	

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int     main()
{
        char dest[20];
        char src[] = {'G', 'o', 'o', 'd', '\0'};
        
        ft_strcpy(dest, src);
        printf("Destination string: %s\n", dest);
        return (0);
}*/
