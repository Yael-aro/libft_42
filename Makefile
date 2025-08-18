SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c
CC = gcc -Wall -Wextra -Werror
LIB = libft.a

%.o :  %.c
	$(CC) -c $< -o $@ -I includes

all : $(LIB)

$(LIB) : ${SRC:.c=.o }
	ar crs $(LIB) ${SRC:.c=.o}

clean :
	rm -f ${SRC:.c=.o}

fclean : clean
	rm -f $(LIB)

re : fclean all