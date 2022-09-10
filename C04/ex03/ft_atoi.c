/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madanir <student.42kocaeli.com.tr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:22:54 by madanir           #+#    #+#             */
/*   Updated: 2022/09/10 16:11:36 by madanir          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	find_char(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count = count * (-1);
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	sign = find_char(str, &i);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}
/*int main() {
    // Write C code here
    char arr[] = " ---+--+1234ab567";
    printf("%d",ft_atoi(arr));

    return 0;
}*/
