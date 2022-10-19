/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvoisin- <lvoisin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:25:08 by lvoisin-          #+#    #+#             */
/*   Updated: 2022/10/19 14:25:08 by lvoisin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		sign;

	i = 0;
	sign = 1;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		i = 1;
		n = n * -1;
		sign = -1;
	}
	j = n;
	while (j)
	{
		j = j / 10;
		i++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i > 0)
	{
		str[--i] = (n % 10) + 48;
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

//  int main(void)
//  {
// 	char *str;
// 	str = ft_itoa(055);
// 	printf("%s\n", str);
//  }