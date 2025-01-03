/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Luigi <Luigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:23:00 by lude-bri          #+#    #+#             */
/*   Updated: 2025/01/02 13:15:01 by luigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# define PRECISION	6

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

//parte 1.
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nprt);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);

//parte 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

//bonus
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new_list);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new_list);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

//plus
int			ft_putchar(char c);
int			ft_printf(const char *s, ...);
int			ft_puthex(char str, unsigned int n);
int			ft_putnbr(int n);
int			ft_putptr(long int n);
int			ft_puthexlong(int long n);
int			ft_putstr(char *s);
int			ft_putudec(unsigned int n);
int			ft_abs(int n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_matrixlen(char **matrix);
int			ft_numlen(int n, int base);
int			ft_unumlen(unsigned int n, int base);
int			ft_uputnbr(unsigned int n);
int			ft_putstrn_fd(char *str, int fd, int n);
int			ft_putnchar_fd(char c, int fd, int n);
char		*ft_xtoa(unsigned long int nb, int is_upper);
char		*ft_dtoa(double d);
char		*ft_uitoa(unsigned int n);
char		*ft_strjoin_free(char *s1, char *s2, int to_free);
char		*ft_strncat(char *dest, char *src, unsigned int n);
char		*ft_strjoin_gnl(char *txt, char *buff);
char		*ft_strchr_gnl(char *txt, int c);
double		ft_pow(double base, double exp);
long long	ft_atoll(const char *nprt);

size_t		ft_strlen_gnl(char *s);
char		*get_next_line(int fd);

#endif
