/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:49:55 by frea              #+#    #+#             */
/*   Updated: 2024/10/23 13:45:13 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*
int main(void)
{
	char newstring[] = "fullon";
	int length = ft_strlen(newstring); 
    	printf("Length of string: %d\n", length); 
	return (0);
}
*/	
