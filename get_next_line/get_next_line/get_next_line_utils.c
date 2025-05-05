/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:21:07 by msalangi          #+#    #+#             */
/*   Updated: 2025/05/06 00:52:20 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ind;

	ind = 0;
	while (ind + 1 < size && *src)
	{
		*dst++ = *src++;
		ind++;
	}
	if (ind < size)
		*dst = 0;
	while (*src++)
		ind++;
	return (ind);
}

char	*ft_strdup(char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	return (ft_strlcpy(str, s1, len), str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	size_t	ind;
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	if (s1)
		len1 = ft_strlen(s1);
	if (s2)
		len2 = ft_strlen(s2);
	join = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!join)
		return (NULL);
	ind = 0;
	while (s1 && *s1)
		join[ind++] = *s1++;
	while (s2 && *s2)
		join[ind++] = *s2++;
	return (join[ind] = '\0', join);
}

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
