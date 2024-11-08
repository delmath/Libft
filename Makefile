NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlen.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_strchr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c

SRCSB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

INC = libft.h
OBJDIR = obj
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)
OBJSB = $(SRCSB:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS) $(INC)
	$(AR) $(NAME) $^

bonus: $(OBJDIR)/$(NAME)


$(OBJDIR)/$(NAME): $(OBJS) $(OBJSB) $(INC)
	$(AR) $@ $^
	cp $@ $(NAME)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJSB)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus