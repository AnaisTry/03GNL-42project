/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angassin <angassin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:28:38 by angassin          #+#    #+#             */
/*   Updated: 2023/01/27 16:03:54 by angassin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/*						          [Includes]								*/

// BUFSIZ
# include <stdio.h>

//	read
# include <unistd.h>

//	malloc, free, size_t
# include <stdlib.h>

// INT_MAX, OPEN-MAX
# include <limits.h>

/*									[Macros]								*/

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE BUFSIZ
# endif

/*									[Functions]								*/

//get_next_line.c
char	*get_next_line(int fd);

//get_next_line_utils.c
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char	const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

#endif
