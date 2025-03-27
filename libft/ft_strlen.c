/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:07:29 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/23 23:05:58 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned long	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return ((size_t)count);
}

// int main(void)
// {
// 	char *test = "this is a string of text";
// 	printf("%lu, %lu", strlen(test), ft_strlen(test));
// }
