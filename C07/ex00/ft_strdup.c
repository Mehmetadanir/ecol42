/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <madanir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 01:25:19 by madanir           #+#    #+#             */
/*   Updated: 2022/09/16 03:35:11 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char	*src)
{
	char	*dest;
	int		index;

	index = 0;
	dest = (char *)(malloc (ft_len(src) * sizeof (char)));
	if (!dest)
	{
		return (0);
	}
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char arr[] = "ali";
	printf("%s", ft_strdup(arr));
	return (0);
}*/
