/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 02:28:09 by msalangi          #+#    #+#             */
/*   Updated: 2025/01/23 19:44:30 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	buffer;
	int		i;

	i = 0;
	while ((src[i] != '\0') && (i <= n))
	{
		buffer = src[i];
		dest[i] = buffer;
		i++;
	}
	return (&dest[i]);
}

// int main(void)
// {
// 	char* src = "hello world";
// 	char* dest;
// 	int n = 5;
// 	ft_strncpy(dest, src, n);
// 	printf("%s", dest);
// }