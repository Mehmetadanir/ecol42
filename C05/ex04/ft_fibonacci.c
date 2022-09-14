/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:51:21 by madanir           #+#    #+#             */
/*   Updated: 2022/09/13 17:51:26 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else
		return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}
/*
int main()
{
	printf("%d",ft_fibonacci(2));
}
*/
