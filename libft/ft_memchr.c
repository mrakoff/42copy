/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:36:02 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/27 14:26:05 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *test = "a string";
// 	char tofind = '\0';
// 	size_t n = 8;

// 	char *res = memchr(test, tofind, n);
// 	char *res2 = ft_memchr(test, tofind, n);
// 	printf("%s\n%s\n", res, res2);
// }
