/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 10:17:18 by madanir           #+#    #+#             */
/*   Updated: 2022/08/30 13:33:31 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	yazma(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	hund;
	char	second;
	char	ones;

	hund = '0';
	while (hund <= '7')
	{
		second = hund + 1;
		while (second <= '8')
		{
			ones = second + 1;
			while (ones <= '9')
			{
				yazma(hund, second, ones);
				if (hund != '7' || second != '8' || ones != '9')
				{
					write(1, ", ", 2);
				}
				ones++;
			}
			second++;
		}
		hund++;
	}
}
