/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 03:38:35 by madanir           #+#    #+#             */
/*   Updated: 2022/09/16 04:23:55 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
	{
		return (0);
	}
	dest = (int *)malloc((max - min) * sizeof(int));
	if (!dest)
	{
		return (0);
	}
	i = 0;
	while (max > min)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	i = 0;
	int	size;
	min = 1;
	max = 18;
	size = max - min;
	ptr = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", ptr[i]);
		i++;
	}
}*/
