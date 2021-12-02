# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #

#                                                     +:+ +:+         +:+      #
#    By: smissott <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 08:55:04 by smissott          #+#    #+#              #
#    Updated: 2021/11/29 14:30:29 by smissott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libftprintf.a

SRCS	=		ft_printf_main.c	\
				ft_putchar.c		\
				ft_putstr.c			\
				ft_hexa_xx.c		\
				ft_hexa_x.c			\
				ft_p.c				\
				ft_putnbr_d.c		\
				ft_putnbr_u.c

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

CFLAGS	+=		-Wall -Wextra -Werror

RM		=		rm -f

all		:		$(NAME)

$(NAME)	:		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJS)	:		%.o : %.c
				$(CC) -c $(CFLAGS) $< -o $@

clean	:
				$(RM) $(OBJS)

fclean	:		clean
				$(RM) $(NAME)

re		:		fclean all

a.out	:		$(NAME)
				gcc -o $@ $(CFLAGS) $(NAME)

.PHONY	:	all clean fclean re
