/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 23:38:18 by msalangi          #+#    #+#             */
/*   Updated: 2025/01/22 02:35:17 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	buffer;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		buffer = src[i];
		dest[i] = buffer;
		i++;
	}
	return (&dest[i]);
}

// int main(void)
// {
// 	char* src = "hi"; 
// 	char* dest;
// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// }