NAME = libft.a
CC = cc
SRC = ft_strncmp.c ft_atoi.c ft_striteri.c ft_calloc.c ft_bzero.c ft_strnstr.c ft_strmapi.c ft_strjoin.c \
            ft_strlcpy.c ft_strlen.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memchr.c ft_memset.c ft_putendl_fd.c \
            ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_strchr.c ft_strdup.c  ft_itoa.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_split.c ft_strlcat.c \
            ft_isprint.c ft_tolower.c ft_toupper.c       


BNS_SRC = ft_lstadd_back_bonus.c  ft_lstadd_front_bonus.c \
				ft_lstclear_bonus.c  ft_lstdelone_bonus.c  ft_lstiter_bonus.c \
				ft_lstlast_bonus.c  ft_lstmap_bonus.c  ft_lstnew_bonus.c  ft_lstsize_bonus.c 

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BNS_SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	touch bonus
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re