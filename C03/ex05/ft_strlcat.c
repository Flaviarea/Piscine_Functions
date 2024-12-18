/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:01:07 by frea              #+#    #+#             */
/*   Updated: 2024/10/21 18:01:09 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	k;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	k = 0;
	while ((src[k] != '\0') && (k < size -1)) 
	{
		dest[len + k] = src[k];
		k++;
	}
	dest[len + k] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
/*
#include <stdio.h>
int main()
{
	char a[] = "abcd";
	char b[] = "iojhjkhhjsda";
	unsigned int d;
	
	d = ft_strlcat(a, b, 5);
	printf("%d", d);
	return 0;
}
*/
