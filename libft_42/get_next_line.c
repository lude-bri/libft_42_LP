/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Luigi <Luigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 09:00:03 by lude-bri          #+#    #+#             */
/*   Updated: 2024/05/15 22:04:18 by Luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*get_left(char *str);
static char		*line_to_clean(char *line);
static char		*fill_line(int fd, char *line);

/**
 * get_next_line - Reads a line from a file descriptor.
 * @fd: The file descriptor to read from.
 *
 * This function reads a line from the file descriptor 'fd'. 
 * It uses static memory to store any leftover data between calls. 
 * The function returns the next line from the file, including the newline 
 * character if present. 
 * 
 * If the end of the file is reached, it returns NULL.
 *
 * Return: A string containing the next line, 
 * or NULL if an error occurs or the end of the file is reached.
 */
char	*get_next_line(int fd)
{
	static char		*line;
	char			*new_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!line)
	{
		line = malloc(1);
		line[0] = '\0';
	}
	line = fill_line(fd, line);
	if (!line)
		return (NULL);
	new_line = line_to_clean(line);
	line = get_left(line);
	return (new_line);
}

/**
 * fill_line - Reads data from a file descriptor and appends it 
 * to the existing buffer.
 * @fd: The file descriptor to read from.
 * @line: The existing buffer where data is stored.
 *
 * This helper function reads data from the file descriptor 'fd' 
 * in chunks defined by BUFFER_SIZE. 
 * The data is appended to the buffer 'line' until a newline character
 * is encountered or the end of the file is reached. 
 * It returns the updated buffer.
 *
 * Return: A pointer to the updated buffer, or NULL if an error occurs.
 */
static char	*fill_line(int fd, char *line)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read != 0 && !ft_strchr_gnl(line, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(line), NULL);
		buffer[bytes_read] = '\0';
		line = ft_strjoin_gnl(line, buffer);
	}
	free(buffer);
	return (line);
}

/**
 * line_to_clean - Extracts the current line from the buffer up to 
 * the newline or end of string.
 * @line: The buffer containing the data read so far.
 *
 * This function extracts the current line from the buffer, 
 * stopping at the newline character or the end of the string. 
 * It allocates memory for the new line, copies
 * the characters, and ensures the result is null-terminated.
 *
 * Return: A pointer to the newly allocated string containing the line,
 * or NULL if allocation fails.
 */
static char	*line_to_clean(char *line)
{
	char	*new_line;
	int		i;

	i = 0;
	if (!line[i])
		return (NULL);
	while (line[i] && line[i] != '\n')
		i++;
	new_line = malloc(sizeof(char) * (i + 2));
	if (!new_line)
		return (NULL);
	i = 0;
	while (line[i] && line[i] != '\n')
	{
		new_line[i] = line[i];
		i++;
	}
	if (line[i] == '\n')
	{
		new_line[i] = line[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

/**
 * get_left - Keeps the leftover part of the buffer after 
 * the newline for the next read.
 * @line: The buffer containing the data read so far.
 *
 * This function extracts the remaining part of the buffer
 * after the first newline.
 * It allocates memory for the leftover data and frees the original buffer.
 *
 * Return: A pointer to the leftover part of the buffer,
 * or NULL if there is no leftover.
 */
static char	*get_left(char *line)
{
	char	*rest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (!line[i])
		return (free(line), NULL);
	rest = malloc(sizeof(char) * (ft_strlen_gnl(line) - i + 1));
	if (!rest)
		return (NULL);
	while (line[i])
		rest[j++] = line[i++];
	rest[j] = '\0';
	free (line);
	return (rest);
}
