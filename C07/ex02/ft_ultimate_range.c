/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 04:25:38 by madanir           #+#    #+#             */
/*   Updated: 2022/09/16 10:34:27 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc((max - min) * sizeof(int));
	if (!dest)
	{
		*range = NULL;
		return (-1);
	}
	*range = dest;
	i = 0;
	while (max > min)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
