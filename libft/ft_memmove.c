/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 14:44:46 by msalangi          #+#    #+#             */
/*   Updated: 2025/03/27 14:26:25 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pdst;
	char	*psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (pdst == psrc)
		return (dst);
	if (pdst < psrc)
		ft_memcpy(pdst, psrc, len);
	else if (psrc < pdst)
	{
		while (len > 0)
		{
			len--;
			pdst[len] = psrc[len];
		}
	}
	return (dst);
}

// int main(void)
// {
// 	char *src = "a source string maybe";
// 	char dst1[50] = "";
// 	char dst2[50] = "";
// 	int len = 22;

// 	char *test1 = memmove(dst1, src, len);
// 	char *test2 = ft_memmove(dst2, src, len);

// 	printf ("%s, %s\n", dst1, test1);
// 	printf ("%s, %s\n", dst2, test2);
// }
