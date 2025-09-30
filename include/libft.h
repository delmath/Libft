/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelvin <madelvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:24:40 by madelvin          #+#    #+#             */
/*   Updated: 2025/09/30 17:56:50 by madelvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copilot : génère automatiquement tous les prototypes de fonctions
// présentes dans mon projet C et mets-les dans ce fichier.
// Inclut le nom de la fonction, les types de retour et les paramètres.
#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
#include <stdint.h>

#define SPACE_LOWER_UPPER 32

typedef unsigned char t_uchar;

typedef struct s_bin
{
	t_uchar	*data;
	size_t	size;
}	t_bin;

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_vector
{
	size_t	element_size;
	size_t	num_elements;
	size_t	max_elements;
	void	*data;
}				t_vector;

void *at_vector(t_vector *vec, size_t i);
double ft_atod(char *str);
float ft_atof(char *str);
int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_lstclear(t_list **lst, void (*del)(void*));
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstlast(t_list *lst);
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list *ft_lstnew(void *content);
int ft_lstsize(t_list *lst);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
ssize_t get_cpu_time(void);
int is_valid_float(char *num);
t_bin join_bin(t_bin b1, t_bin b2);
int read_bin_file(t_bin *bin, const char *filename);
int read_int16(const t_bin *bin, const size_t i, int16_t *dest);
int read_int16_little(const t_bin *bin, const size_t i, int16_t *dest);
int read_int16_move(const t_bin *bin, size_t *i, int16_t *dest);
int read_int16_move_little(const t_bin *bin, size_t *i, int16_t *dest);
int read_int32(const t_bin *bin, const size_t i, int32_t *dest);
int read_int32_little(const t_bin *bin, const size_t i, int32_t *dest);
int read_int32_move(const t_bin *bin, size_t *i, int32_t *dest);
int read_int32_move_little(const t_bin *bin, size_t *i, int32_t *dest);
int read_int64(const t_bin *bin, const size_t i, int64_t *dest);
int read_int64_little(const t_bin *bin, const size_t i, int64_t *dest);
int read_int64_move(const t_bin *bin, size_t *i, int64_t *dest);
int read_int64_move_little(const t_bin *bin, size_t *i, int64_t *dest);
int read_int8(const t_bin *bin, const size_t i, int8_t *dest);
int read_int8_move(const t_bin *bin, size_t *i, int8_t *dest);
int read_uint16(const t_bin *bin, const size_t i, uint16_t *dest);
int read_uint16_little(const t_bin *bin, const size_t i, uint16_t *dest);
int read_uint16_move(const t_bin *bin, size_t *i, uint16_t *dest);
int	read_uint16_move_little(const t_bin *bin, size_t *i, uint16_t *dest);
int read_uint32(const t_bin *bin, const size_t i, uint32_t *dest);
int read_uint32_little(const t_bin *bin, const size_t i, uint32_t *dest);
int read_uint32_move(const t_bin *bin, size_t *i, uint32_t *dest);
int read_uint32_move_little(const t_bin *bin, size_t *i, uint32_t *dest);
int read_uint64(const t_bin *bin, const size_t i, uint64_t *dest);
int read_uint64_little(const t_bin *bin, const size_t i, uint64_t *dest);
int read_uint64_move(const t_bin *bin, size_t *i, uint64_t *dest);
int read_uint64_move_little(const t_bin *bin, size_t *i, uint64_t *dest);
int read_uint8(const t_bin *bin, const size_t i, uint8_t *dest);
int read_uint8_move(const t_bin *bin, size_t *i, uint8_t *dest);
int vector_add(t_vector *vector, void *element);
int vector_init(t_vector *vector, size_t element_size, size_t default_size);
int vector_pop(t_vector *vector, void *out_element);
int vector_realloc(t_vector *vector);

#endif