# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/04 09:36:53 by nchoo             #+#    #+#              #
#    Updated: 2022/07/07 19:46:34 by nchoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER		=	libft.h
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
OBJS		=	$(SRCS:.c=.o)
BOBJS		=	$(BONUS:.c=.o)
NAME		=	libft.a
SRCS		=	ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_memset.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_bzero.c ft_strlen.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c
BONUS		=	ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c
AR			=	ar rcs
RM			=	rm -f

all : 		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c -I$(HEADER) $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

bonus :		$(OBJS) $(BOBJS)
			$(AR) $(NAME) $(OBJS) $(BOBJS)

clean:
			$(RM) $(OBJS) $(BOBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re bonus clean fclean all
