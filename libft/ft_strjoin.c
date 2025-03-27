/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:47:25 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/23 23:48:09 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		ind;

	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	ind = 0;
	if (!join)
		return (NULL);
	while (*s1)
	{
		join[ind] = *s1;
		ind++;
		s1++;
	}
	while (*s2)
	{
		join[ind] = *s2;
		ind++;
		s2++;
	}
	join[ind] = '\0';
	return (join);
}

// int main(void)
// {
// 	char *s1 = "what ";
// 	char *s2 = "is this";
// 	char *test = ft_strjoin(s1, s2);
// 	printf("%s\n", test);
// 	free(test);
// }
