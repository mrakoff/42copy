/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:38:46 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/23 20:57:18 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	ind;

	ind = 0;
	if (!dst && !src && n > 0)
		return (NULL);
	while (ind < n)
	{
		*(char *)(dst + ind) = *(char *)(src + ind);
		ind++;
	}
	return (dst);
}

// int main(void)
// {
// 	int src = 42;
// 	int dst = 0;
// 	int dst2 = 0;

// 	int n = 1;

// 	int res = *(int *)memcpy(&dst, &src, n);
// 	int res2 = *(int *)ft_memcpy(&dst2, &src, n);

// 	printf("%i, %i\n", dst, res);
// 	printf("%i, %i\n", dst2, res2);
// }
