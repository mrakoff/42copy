/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:17:16 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/22 16:58:14 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	b_ind;

	b_ind = 0;
	while (b_ind < len)
	{
		*((char *)b + b_ind) = c;
		b_ind++;
	}
	return (b);
}

// int main(void)
// {
// 	char test1[] = "this is a string probablyaaaaaaaaaaaaaaaa";
// 	char test2[] = "this is a string probablyaaaaaaaaaaaaaaaa";

// 	int c = '-';
// 	int len = 42;
// 	memset(test1, c, len);
// 	printf("%s\n", test1);

// 	ft_memset(test2, c, len);
// 	printf("%s\n", test2);
// }
