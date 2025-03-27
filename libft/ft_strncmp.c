/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:07:06 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/27 14:29:21 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	ind;

	ind = 0;
	if (n == 0)
		return (0);
	while (s1[ind] && s2[ind] && s1[ind] == s2[ind] && ind + 1 < n)
		ind++;
	return ((unsigned char)s1[ind] - (unsigned char)s2[ind]);
}

// int main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "hiiii";
// 	int n = 5;

// 	printf("%i\n", strncmp(s1, s2, n));
// 	printf("%i\n", ft_strncmp(s1, s2, n));
// }
