/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:02:49 by madanir           #+#    #+#             */
/*   Updated: 2022/09/14 12:49:02 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc -1;
	j = 0;
	if (argc > 1)
	{
		while (i > 0)
		{
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			i--;
		}
	}
	return (0);
}
