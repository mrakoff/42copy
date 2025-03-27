/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:11:27 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/27 14:26:14 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	ind;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	ind = 0;
	if ((!s1 && !s2) || n == 0)
		return (0);
	while (ps1[ind] == ps2[ind] && ind + 1 < n)
		ind++;
	return (ps1[ind] - ps2[ind]);
}

// int main(void)
// {
// 	int i = 'a';
// 	int j = 'A';
// 	int *test = &i;
// 	int *test2 = &j;
// 	int n = 4;

// 	printf("%i\n", memcmp(test, test2, n));
// 	printf("%i\n", ft_memcmp(test, test2, n));
// }
