NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
       ft_striteri.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

ifdef BONUS
SRCS += ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
        ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
endif

SRCS := $(addprefix src/, $(SRCS))

INC = ../include
OBJDIR = obj
SRCDIR = src
CC = cc
MAKE = make --no-print-directory
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

GREEN = \033[1;32m
BLUE = \033[1;34m
YELLOW = \033[1;33m
RED = \033[1;31m
RESET = \033[0m

all: $(NAME)

bonus:
	@$(MAKE) BONUS=1 all

$(NAME): $(OBJS)
	@echo "$(GREEN)[INFO - LIBFT]$(RESET) Linking libft..."
	@$(AR) $(NAME) $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INC)/libft.h
	@mkdir -p $(OBJDIR)
	@echo "$(GREEN)[INFO - LIBFT]$(RESET) Compiling $<..."
	@$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
	@echo "$(RED)[CLEAN - LIBFT]$(RESET) Removing object files..."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "$(RED)[CLEAN - LIBFT]$(RESET) Removing libft.a..."
	@rm -f $(NAME)

re: fclean
	@echo "$(YELLOW)[INFO - LIBFT]$(RESET) Rebuilding from scratch..."
	@$(MAKE) all

.PHONY: all clean fclean re bonus