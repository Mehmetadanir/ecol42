/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:28:45 by madanir           #+#    #+#             */
/*   Updated: 2022/09/13 14:28:48 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	i = 2;
	if (number <= 0)
		return (0);
	if (number == 1)
		return (1);
	if (number >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
/*
int	main()
{
	printf("%d\n",ft_sqrt(0));
	printf("%d",ft_sqrt(2147483647);
}
*/
