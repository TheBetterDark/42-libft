/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muabdi <muabdi@student.42london.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:30:51 by muabdi            #+#    #+#             */
/*   Updated: 2024/04/17 16:11:47 by muabdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
char				*ft_strnstr(const char *str, const char *sub, size_t len);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
void				*ft_memmove(void *s1, const void *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strjoin(char const *s1, char const *s2);
void				*ft_memchr(const void *s, int c, size_t n);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				*ft_calloc(size_t nmemb, size_t size);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_realloc(void *ptr, size_t size);
char				*ft_strrchr(const char *str, int c);
char				*ft_strchr(const char *str, int c);
char				**ft_split(char const *s, char c);
void				ft_putendl_fd(char *s, int fd);
void				ft_putstr_fd(char *s, int fd);
char				*ft_tobase(int num, int base);
void				ft_putchar_fd(char c, int fd);
void				ft_bzero(void *s, size_t n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strdup(const char *src);
size_t				ft_strlen(const char *str);
t_list				*ft_lstnew(void *content);
int					ft_atoi(const char *str);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
int					ft_isprint(int arg);
int					ft_toupper(int ch);
int					ft_tolower(int ch);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
char				*ft_itoa(int n);

#endif
