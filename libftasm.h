/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justasze <justasze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:39:24 by justasze          #+#    #+#             */
/*   Updated: 2018/09/10 20:35:23 by justasze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H

# include <ctype.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

size_t	ft_strlen(const char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_puts(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strrev(char *str);
int		ft_strcmp(const char *s1, const char *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *dst, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
char	*ft_strcat(char *s1, char *s2);
void	ft_putnbr(int nbr);
void	ft_cat(int fd);
void	ft_lstadd(t_list **alst, t_list *new_lst);
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
