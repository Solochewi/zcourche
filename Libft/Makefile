NAME = libft.a
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strdup.c\
ft_calloc.c ft_strjoin.c ft_itoa.c ft_substr.c ft_putstr_fd.c ft_strnstr.c\
ft_atoi.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_putchar_fd.c\
ft_strtrim.c ft_strmapi.c
OBJECTS = $(SOURCES:.c=.o)
BONUS = $(SOURCES) 
BONUS_OBJECTS = $(BONUS:.c=.o)

all : $(SOURCES)
	cc -Wall -Werror -Wextra -c $(SOURCES)
	ar rcs $(NAME) $(OBJECTS)

bonus : $(BONUS)
	cc -Wall -Werror -Wextra -c $(BONUS)
	ar rcs $(NAME) $(BONUS_OBJECTS)

clean :
	rm -rf $(BONUS_OBJECTS)

fclean : clean
	rm -rf $(NAME) tester

$(NAME) : all

re : fclean all

test : $(BONUS) test.c
	cc -Wall -Werror -Wextra $(BONUS) test.c -o tester