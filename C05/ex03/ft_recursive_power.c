/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:50:10 by madanir           #+#    #+#             */
/*   Updated: 2022/09/13 17:50:58 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (i < power)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
/*
int	main()
{
	printf("%d",ft_recursive_power(3,2));
}
*/
