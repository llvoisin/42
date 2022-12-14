/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:15:39 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/11/02 13:39:57 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *) s1)[i] == ((unsigned char *) s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}
