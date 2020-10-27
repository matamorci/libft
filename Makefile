.PHONY: all, clean, fclean, re

NAME = libft.a

INC = libft.h

RAW_SRCS=\
			 ft_strlcpy.c \
			 ft_strlcat.c \
			 ft_strchr.c \
			 ft_strrchr.c \
			 ft_strnstr.c \
			 ft_strncmp.c \
			 ft_atoi.c \
			 ft_isalpha.c \
			 ft_isdigit.c \
			 ft_isalnum.c \
			 ft_isascii.c \
			 ft_isprint.c \
			 ft_toupper.c \
			 ft_tolower.c \
			 ft_calloc.c \
			 ft_strdup.c \
			 ft_substr.c \
			 ft_strjoin.c \
			 ft_strtrim.c \
			 ft_split.c \
			 ft_itoa.c \
			 ft_strmapi.c \
			 ft_putchar_fd.c \
			 ft_putstr_fd.c \
			 ft_putendl_fd.c \
			 ft_putnbr_fd.c \

OBJS = $(RAW_SRCS:.c=.o)


CC = gcc
CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
		@$(CC) $(CFLAG) -c $^ -o $@ -I $(INC)

$(NAME): $(OBJS)
		@ar -rc $(NAME) $(OBJS) $@ $^
			@ranlib $(NAME)

clean:
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all