/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 11:50:04 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/25 15:22:58 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		else
		{
			n = -n;
			ft_putchar_fd('-', fd);
		}
	}
	if (n == '0')
		ft_putchar_fd('0', fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n != -2147483648)
		ft_putchar_fd(n + '0', fd);
}

// int main(void)
// {
// 	int n = 424242;
// 	// int n = 0;
// 	// int n = -23423423;
// 	// int n = -2147483648;

// 	int fd = 1;
// 	ft_putnbr_fd(n, fd);
// }
