/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:52:57 by madanir           #+#    #+#             */
/*   Updated: 2022/09/13 17:53:05 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / 2 && i <= 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main()
{
	printf("%d" ,ft_find_next_prime(12));
}
*/
