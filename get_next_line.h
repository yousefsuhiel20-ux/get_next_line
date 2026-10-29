/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuhuss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 21:01:12 by yabuhuss          #+#    #+#             */
/*   Updated: 2026/10/29 22:38:28 by yabuhuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t  str_len(char *str);
char    *get_next_line(int fd);
char	*search_n(char *str);
char	*str_join(char *s1, char *s2);
char	*str_sub(char *s, size_t start, size_t len);

#endif