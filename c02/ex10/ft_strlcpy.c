/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:23:40 by msalangi          #+#    #+#             */
/*   Updated: 2025/01/25 00:26:16 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			buffer;
	unsigned int	i;

	i = 0;
	while (i <= size)
	{
		buffer = src[i];
		dest[i] = buffer;
		i++;
	}
	return (size);
}

// int main (void)
// {
// 	char *str1 = "hello";
// 	char *str2;
// 	ft_strlcpy(str2, str1, 6);
// 	printf("%s", str2);
// }