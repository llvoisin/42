/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:13:42 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:13:42 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char str[] = "hello dhehes";
// 	printf("\nBefore ft_bzero: %s\n", str);
// 	ft_bzero(str, sizeof(char));
// 	printf("\nAfter ft_bzero: %s\n", str);
// }