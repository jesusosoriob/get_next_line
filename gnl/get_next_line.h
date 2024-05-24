/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 13:54:08 by josorio           #+#    #+#             */
/*   Updated: 2024/05/19 10:26:16 by josorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <string.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

char	*read_file(int fd, char *res);
char	*del_line(char *buffer);
char	*save_line(char *buffer);
char	*get_next_line(int fd);
char	*ft_strchar(const char *str, int c);
char	*ft_strjoin(char *s1, char const *s2);

size_t	ft_strlen(const char *str);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementSize, size_t elementCount);
char	*ft_free(char *str, char *buf);
#endif
