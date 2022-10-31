/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvoisin- <lvoisin-@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/31 15:16:58 by lvoisin-      #+#    #+#                 */
/*   Updated: 2022/10/31 15:16:58 by lvoisin-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&(((char *) s)[i]));
	i++;
	}
	if (s[i] == ((char) c))
		return (&(((char *) s)[i]));
	return (NULL);
}

// int main(void)
// {
// 	#include <string.h>

// 	char c = 'a';
// 	char cat[] = "hello my name is carotte";
// 	printf("%s\n", ft_strchr(cat, c));
// 	printf("%s\n", strchr(cat, c));
// }