/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:12:42 by madanir           #+#    #+#             */
/*   Updated: 2022/09/08 10:48:14 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != 0)
	{
		x++;
	}
	while ((src[y] != '\0') && (y != nb))
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
/*int main()
{
	char arr[] = "abcd";
	char arr1[] = "ab";
	printf("%s", ft_strncat(arr1,arr,2));
	return (0);
}*/
