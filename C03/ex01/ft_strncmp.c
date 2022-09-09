/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 13:24:15 by madanir           #+#    #+#             */
/*   Updated: 2022/09/08 10:39:26 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-5);
		if (s1[i] > s2[i])
			return (5);
		i++;
	}
	return (0);
}
/*int main()
{
	unsigned int a;
	char arr[] = "Mehmet";
	char arr1[] = "MeAdanir";

	a = 5;
	printf("%d", ft_strncmp(arr, arr1, a));
			
	return 0;
}*/
