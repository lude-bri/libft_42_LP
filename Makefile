# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lude-bri <lude-bri@42student.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 16:21:50 by lude-bri          #+#    #+#              #
#    Updated: 2024/04/29 17:27:13 by lude-bri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
NAME = libft.a

LIBFT_PATH = ./libft_42

SRCS_FILES = ft_isalpha.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
	ft_memmove.c ft_strlcpy.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strtrim.c ft_strjoin.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_itoa.c ft_split.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(addprefix $(LIBFT_PATH)/,SRCS_FILES:.c=.o)

BONUS = $(BONUS_FILES:.c=.o) $(OBJS)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS)
	@make OBJS="$(BONUS)" all

clean:
	$(RM) $(OBJS) $(BONUS)
fclean: clean
	$(RM) $(NAME) $(BONUS)
re: fclean
	$(MAKE) all

.PHONY : all clean fclean re
