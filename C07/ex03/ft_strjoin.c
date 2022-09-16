/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 05:42:02 by madanir           #+#    #+#             */
/*   Updated: 2022/09/16 05:44:49 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	ptr = (char *)malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			ptr[k++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			ptr[k++] = sep[j++];
		}
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	*tab[4];
	tab[0] = " ";
	tab[1] = " ";
	tab[2] = " ";
	tab[3] = " ";
	printf("%s", ft_strjoin(4, tab, "Pasquale"));
	return (0);
}*/
