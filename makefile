CC = gcc
CFLAGS= -Wall -Wextra -Werror
DEPS = libft.h
OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_strchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

libft: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)