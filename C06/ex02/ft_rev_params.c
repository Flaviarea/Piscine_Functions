/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:48:42 by frea              #+#    #+#             */
/*   Updated: 2024/10/23 15:48:43 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}

/*
We’re dealing with a program here, you should therefore have a function main in
your .c file.
• Create a program that displays its given arguments.
• One per line, in the reverse order of the command line.
• It should display all arguments, except for argv[0].
*/

