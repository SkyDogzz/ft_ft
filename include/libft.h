/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skydogzz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:32:43 by skydogzz          #+#    #+#             */
/*   Updated: 2025/02/21 20:06:21 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "color.h"

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

// memory related fonctions

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);

// string related fonctions

size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strdup(const char *s);
char		*ft_strndup(const char *s, int n);
// still have a weird bug with ft_strreplace
char		*ft_strreplace(const char *full, const char *old, const char *ne);

void		ft_freetab(char **tab);
t_bool		ft_isin_charset(const char c, const char *set);
t_bool		ft_isin_stringset(const char *s, const char *set, const char delim);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// char check related functions

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_isspace(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

// fd related functions
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

// convert related functions

int			ft_atoi(const char *str);
// int     	ft_atoi_base(const char *str, const char *base);
char		*ft_itoa(int n);
// char		*ft_itoa_base(int n, const char *base);
// long		ft_atol(const char *str);
// long    	ft_atol_base(const char *str, const char *base);
// char		*ft_ltoa(long n);
// char    	*ft_ltoa_base(long n, const char *base);
// long long	ft_atoll(const char *str);
// long long   ft_atoll_base(const char *str, const char *base);
// char		*ft_lltoa(long n);
// char    	*ft_lltoa_base(long long n, const char *base);

// list related

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void *content);
t_list		*ft_lstadd_front(t_list **lst, t_list *ne);
int			ft_lstsize(t_list *lst);
int			ft_lstsize_full(t_list *lst);
t_list		*ft_lstfirst(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstadd_back(t_list **lst, t_list *ne);
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// utils related

int			ft_abs(int n);
int			ft_max(int a, int b);
int			ft_min(int a, int b);
void		ft_swap(int *a, int *b);
int			ft_power(int n, int exp);
int			ft_factorial(int n);
int			ft_sqrt(int n);

// dlist related

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}					t_dlist;

t_dlist		*ft_dlstnew(void *content);
void		ft_dlstadd_front(t_dlist **dlst, t_dlist *ne);
void		ft_dlstadd_back(t_dlist **dlst, t_dlist *ne);
int			ft_dlstsize(t_dlist *dlst);
int			ft_dlstsize_full(t_dlist *dlst);
t_dlist		*ft_dlstfirst(t_dlist *dlst);
t_dlist		*ft_dlstlast(t_dlist *dlst);
void		ft_dlstiter(t_dlist *dlst, void (*f)(void *));
t_dlist		*ft_dlstmap(t_dlist *dlst, void *(*f)(void *), void (*del)(void *));
void		ft_dlstdelone(t_dlist *dlst, void (*del)(void *));
void		ft_dlstclear(t_dlist **dlst, void (*del)(void *));

// binary tree related

typedef struct s_btree
{
	void			*content;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

t_btree		*ft_btree_new(void *content);
void		ft_btree_insert(t_btree **root, t_btree *ne,
				int (*cmp)(void *, void *));
void		ft_btree_inorder(t_btree *root, void (*f)(void *));
void		ft_btree_preorder(t_btree *root, void (*f)(void *));
void		ft_btree_postorder(t_btree *root, void (*f)(void *));
int			ft_btree_size(t_btree *root);
int			ft_btree_height(t_btree *root);
void		ft_btree_clear(t_btree **root, void (*del)(void *));

#endif
