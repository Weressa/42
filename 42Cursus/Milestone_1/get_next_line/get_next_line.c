/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: assabich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:57:05 by assabich          #+#    #+#             */
/*   Updated: 2025/01/17 18:06:45 by assabich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*create_line(int fd, char *buf, char *left)
{
	int		lu;
	char	*temp;

	lu = read(fd, buf, BUFFER_SIZE);
	while (lu > 0)
	{
		buf[lu] = '\0';
		if (left)
			temp = ft_strjoin(left, buf);
		else
			temp = ft_strdup(buf);
		free(left);
		left = temp;
		if (ft_strchr(left, '\n'))
			break ;
		lu = read(fd, buf, BUFFER_SIZE);
	}
	if ((lu == 0 && left && *left == '\0') || lu < 0)
	{
		free(left);
		left = NULL;
	}
	free(buf);
	return (left);
}

char	*extract_line(char *left)
{
	char	*newl;
	char	*line;

	newl = ft_strchr(left, '\n');
	if (newl)
		line = ft_substr(left, 0, (newl - left + 1));
	else
		line = ft_strdup(left);
	return (line);
}

char	*leftover(char *left)
{
	char	*newl;
	char	*remain;

	newl = ft_strchr(left, '\n');
	if (newl)
		remain = ft_strdup(newl + 1);
	else
		remain = NULL;
	return (remain);
}

char	*get_next_line(int fd)
{
	static char	*left;
	char		*buf;
	char		*line;
	char		*temp;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	left = create_line(fd, buf, left);
	if (!left)
		return (NULL);
	line = extract_line(left);
	temp = leftover(left);
	free(left);
	left = temp;
	return (line);
}
/*
int	main()
{
	int	fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);\
	if (fd < 0)
	{
		printf("error opening file");
		return 1;
	}
//    while ((line = get_next_line(fd)) != NULL) { // Read lines until EOF
        printf("%s", line); // Print the line
        free(line);         // Free the line after use
//    }

    close(fd); // Close file descriptor
    return (0);
}*/
