# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rysmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 13:22:43 by rysmith           #+#    #+#              #
#    Updated: 2019/08/19 17:27:54 by rysmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memalloc.c \
  	  ft_putnbr.c \
  	  ft_strequ.c \
  	  ft_strnew.c \
	  ft_memccpy.c \
  	  ft_putnbr_fd.c \
  	  ft_striter.c \
  	  ft_strnstr.c \
	  ft_memchr.c \
  	  ft_striteri.c \
  	  ft_strrchr.c \
	  ft_atoi.c \
  	  ft_memcmp.c \
  	  ft_putstr.c \
  	  ft_strjoin.c \
  	  ft_strsplit.c \
	  ft_bzero.c \
  	  ft_memcpy.c \
  	  ft_putstr_fd.c \
  	  ft_strlcat.c \
  	  ft_strstr.c \
	  ft_cntchr.c \
  	  ft_memdel.c \
  	  ft_strcat.c \
  	  ft_strlen.c \
  	  ft_strsub.c \
	  ft_isalnum.c \
  	  ft_memmove.c \
  	  ft_strchr.c \
  	  ft_strmap.c \
  	  ft_strtrim.c \
	  ft_isalpha.c \
  	  ft_memset.c \
  	  ft_strclr.c \
  	  ft_strmapi.c \
  	  ft_tolower.c \
	  ft_isascii.c \
  	  ft_putchar.c \
  	  ft_strcmp.c \
  	  ft_strncat.c \
  	  ft_toupper.c \
	  ft_isdigit.c \
  	  ft_putchar_fd.c \
  	  ft_strcpy.c \
  	  ft_strncmp.c \
  	  ft_isprint.c \
  	  ft_putendl.c \
  	  ft_strdel.c \
  	  ft_strncpy.c \
	  ft_itoa.c \
  	  ft_putendl_fd.c \
  	  ft_strdup.c \
  	  ft_strnequ.c

OBJ = $(SRC:.c=.o)

INCL = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
