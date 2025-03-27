/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:26:08 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/27 14:24:42 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	char *test = "this is a string";
// 	char tofind = '\0';

// 	char *res = strchr(test, tofind);
// 	char *res2 = ft_strchr(test, tofind);
// 	printf("%s\n%s\n", res, res2);
// }
