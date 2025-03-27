/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:47:06 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/22 18:00:22 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buf;

	buf = malloc(count * size);
	if (!buf)
		return (NULL);
	ft_bzero(buf, count * size);
	return (buf);
}

// int main(void)
// {
// 	size_t count = 8;
// 	size_t size = 1;

// 	int *test = ft_calloc(count, size);
// 	int *test2 = calloc(count, size);

// 	printf("%i\n%i\n", *test, *test2);
// }
