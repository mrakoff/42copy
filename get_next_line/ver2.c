// char	*get_next_line(int fd)
// {
// 	static char	buffer[BUFFER_SIZE + 1];
// 	char		*string;
// 	char		*line;
// 	int			charcount;
// 	int			true;

// 	charcount = 0;
// 	if (fd < 0 || BUFFER_SIZE == 0)
// 		return (NULL);
// 	true = 1;
// 	string = malloc(sizeof(char) * BUFFER_SIZE + 1);
// 	if (!string)
// 		return (NULL);
// 	while (*buffer || true == 1)
// 	{
// 		read(fd, buffer, 1);
// 		if (*buffer == '\0')
// 			return (NULL);
// 		if (*buffer != '\n')
// 		{
// 			string[charcount] = *buffer;
// 			charcount++;
// 		}
// 		else if (*buffer == '\n')
// 		{
// 			string[charcount] = *buffer;
// 			charcount++;
// 			break ;
// 		}
// 		true = 0;
// 	}
// 	string[charcount] = '\0';
// 	line = malloc(sizeof(char) * ft_strlen(string));
// 	if (!line)
// 		return (NULL);
// 	ft_strlcpy(line, string, charcount);
// 	free(string);
// 	while (charcount >= 0)
// 	{
// 		buffer[charcount] = '\0';
// 		charcount--;
// 	}
// 	return (line);
// }




// this one worked 

// char	*get_next_line(int fd)
// {
// 	static char	buffer[BUFFER_SIZE + 1];
// 	char		temp[BUFFER_SIZE + 1];
// 	char		*string;
// 	int			charcount;
// 	int			true;

// 	charcount = 0;
// 	if (fd < 0 || BUFFER_SIZE == 0)
// 		return (NULL);
// 	true = 1;
// 	while (*buffer || true == 1)
// 	{
// 		read(fd, buffer, 1);
// 		if (*buffer == '\0')
// 			return (NULL);
// 		if (*buffer != '\n')
// 		{
// 			temp[charcount] = *buffer;
// 			charcount++;
// 		}
// 		else if (*buffer == '\n')
// 		{
// 			temp[charcount] = *buffer;
// 			charcount++;
// 			break ;
// 		}
// 		true = 0;
// 	}
// 	temp[charcount] = '\0';
// 	string = malloc(sizeof(char) * charcount + 1);
// 	if (!string)
// 		return (NULL);
// 	ft_strlcpy(string, temp, charcount + 1);
// 	while (charcount >= 0)
// 	{
// 		temp[charcount] = '\0';
// 		buffer[charcount] = '\0';
// 		charcount--;
// 	}
// 	return (string);
// }



	// static char		*temp;
	// static unsigned int		charcount;
	// unsigned int		bytecount;
	// unsigned int i;	

	// charcount = 0;
	// bytecount = 0;
	// i = 0;

	// while (buffer[i] != '\n' && buffer[i] != '\0')
	// {
	// 	temp[charcount] = buffer[i];
	// 	// buffer[charcount] = '\0';
	// 	// temp = malloc(sizeof(char) * charcount + 1);
	// 	// ft_strlcpy(temp, buffer, charcount);
	// 	// string = ft_strjoin(string, temp);
	// 	// printf("%s", buffer);
	// 	charcount++;
	// 	i++;
	// }
	// string = ft_strjoin(string, temp);
	// // free(temp);
	// if (buffer[i] == '\n' && i <= bytecount)
	// {
	// 	while (i <= bytecount)
	// 	{
	// 		temp[charcount] = buffer[i];
	// 		i++;
	// 		charcount++;
	// 	}
	// }
	// // temp[charcount] = '\0';
	// printf("%i charcount, %i bytecount\n", charcount, bytecount);




// 	kinda works

// char	*get_next_line(int fd)
// {
// 	static char	buffer[BUFFER_SIZE + 1];
// 	char		*line;
// 	char		*newline_pos;
// 	char		*temp;
// 	char		tmp_buf[BUFFER_SIZE + 1];
// 	ssize_t		bytes;

// 	if (fd < 0 || BUFFER_SIZE <= 0)
// 		return (NULL);

// 	line = ft_strdup(""); // start with empty string
// 	while (1)
// 	{
// 		if (buffer[0] == '\0')
// 		{
// 			bytes = read(fd, buffer, BUFFER_SIZE);
// 			if (bytes <= 0)
// 			{
// 				free(line);
// 				return (NULL);
// 			}
// 			buffer[bytes] = '\0';
// 		}

// 		newline_pos = ft_strrchr(buffer, '\n');
// 		if (newline_pos)
// 		{
// 			size_t len = newline_pos - buffer + 1;
// 			ft_strlcpy(tmp_buf, buffer, len + 1);
// 			temp = ft_strjoin(line, tmp_buf);
// 			free(line);
// 			line = temp;

// 			ft_strlcpy(buffer, newline_pos + 1, BUFFER_SIZE - len + 1);
// 			return (line);
// 		}
// 		else
// 		{
// 			temp = ft_strjoin(line, buffer);
// 			free(line);
// 			line = temp;
// 			buffer[0] = '\0';
// 		}
// 	}
// }




	// store bytes after newline in a buffer
	// previous_buffer = ft_save_buffer(buffer);
	// if (buffer[0] == '\n')
	// {
	// 	line = ft_strjoin(previous_buffer, temp);
	// 	// free(previous_buffer);
	// 	return (ft_strjoin(line, "\n"));
	// }
	// else
	// line = ft_strjoin(previous_buffer, temp);

