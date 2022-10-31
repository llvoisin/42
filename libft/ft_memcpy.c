/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:46 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:15:46 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*char_dst;
	char	*char_src;

	i = 0;
	char_dst = (char *) dst;
	char_src = (char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < (int) n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dst);
}
// int main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>
// 	char src[] = "hell";
// 	char dest[50] = "you";
// 	// memcpy(dest, src, 3);
// 	// printf("src = %s\n", src);
// 	// printf("dest = %s\n", dest);
// 	ft_memcpy(dest, src, 4);
// 	printf("src = %s\n", src);
// 	printf("dest = %s\n", dest);
// }
