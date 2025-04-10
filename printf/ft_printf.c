/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:41:04 by msalangi          #+#    #+#             */
/*   Updated: 2025/04/10 23:16:34 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		charcount;
	int		n;

	charcount = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			n = ft_check_format(format, args);
			if (n == -1)
				return (-1);
			charcount += n;
		}
		else if (*format != '%' && ft_putchar(*format) != -1)
			charcount++;
		else
			return (-1);
		format++;
	}
	va_end(args);
	return (charcount);
}
// include <stdio.h>
// int main (void)
// {
// 	// int test = ft_printf("mrintf says %%, %c%c, %s\n", 'h', 'i', "hello");
// 	// int test2 = printf("printf says %%, %c%c, %s\n", 'h', 'i', "hello");

// 	int test = ft_printf("%s", "");
// 	int test2 = printf("%s", "");

// 	// int test = ft_printf("mrintf says %i, %d, %u\n", 487993513, 042, 010);
// 	// int test2 = printf("printf says %i, %d, %u\n", 487993513, 042, 010);

// 	// int test = ft_printf("mrintf says %x\n", -42);
// 	// int test2 = printf("printf says %x\n", -42);

// 	// int	n = 42;
// 	// int	*ptr = &n;
// 	// int test = ft_printf("mrintf says %p\n", ptr);
// 	// int test2 = printf("printf says %p\n", ptr);

// 	printf("mrintf: %i\nprintf: %i\n", test, test2);
// }