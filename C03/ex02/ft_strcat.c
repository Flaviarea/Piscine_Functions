/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:10:48 by frea              #+#    #+#             */
/*   Updated: 2024/10/21 16:10:51 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	k;

	len = 0;
	while (dest[len])
		len++;
	k = 0;
	while (src[k])
	{
		dest[len] = src[k];
		k++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/*
#include <unistd.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int	main(void)
{
	char src[] = "don't eat chocolate";
	char dest[18] = "grizzli tells you\n";
	ft_strcat(dest, src);
	ft_putstr(dest);
}*/
