/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:34:02 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/22 18:03:23 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	ind;

	ind = 0;
	while (ind + 1 < size && *src)
	{
		*dst = *src;
		ind++;
		src++;
		dst++;
	}
	if (ind < size)
		*dst = 0;
	while (*src)
	{
		src++;
		ind++;
	}
	return (ind);
}

// int main(void)
// {
// 	char src[] = "a string probably";
// 	char dst[25] = "";
// 	int size = 20;
// 	int i = strlcpy(dst, src, size);
// 	printf("%s, %i\n", dst, i);
// 	int j = ft_strlcpy(dst, src, size);
// 	printf("%s, %i\n", dst, j);
// }
