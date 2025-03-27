/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:49:26 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/27 14:25:21 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}

// int main(void)
// {
// 	char test = '4';
// 	printf("%i, %i", isalnum(test), ft_isalnum(test));
// }
