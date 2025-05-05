
// char	*ft_extract_from_buffer(char *previous_buffer) // FIX THIS TO EXTRACT A NEW LINE EACH TIME BRO
// {
// 	char	*res;
// 	char	*newline;
// 	int len;
	
// 	newline = ft_strrchr(previous_buffer, '\n');
// 	if (newline == NULL)
// 		return (previous_buffer);
// 	else
// 	{
// 		len = newline - previous_buffer + 1;
// 		res = malloc(sizeof(char) * len + 1);
// 		ft_strlcpy(res, previous_buffer, len);
// 	}
// 	*newline = '\0';
// 	// *previous_buffer = '\0';
// 	return (res);
// }

// char *ft_after_nl_buffer(char *buffer)
// {
// 	char	*end;
// 	char	*newline;
// 	char	*result;
	
// 	if (!buffer)
// 		return (NULL);
// 	newline = ft_strrchr(buffer, '\n');
// 	// if (!newline)
// 		// ;
	
// 	end = ft_strrchr(newline + 1, '\n');
// 	if (!end)
// 		return (ft_strdup(""));
// 	// if (newline && end)
// 	// {
// 		result = malloc(sizeof(char) * (end - newline));
// 		ft_strlcpy(result, newline + 1, (end - newline));
// 	// }
// 	return (result);
// }
