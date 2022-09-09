/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:26:13 by madanir           #+#    #+#             */
/*   Updated: 2022/08/30 12:24:55 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	second_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_putchar(first_number / 10 + 48);
			ft_putchar(first_number % 10 + 48);
			ft_putchar(' ');
			ft_putchar(second_number / 10 + 48);
			ft_putchar(second_number % 10 + 48);
			if (first_number != 98)
				write(1, ", ", 2);
			second_number++;
		}
	first_number++;
	}
}
