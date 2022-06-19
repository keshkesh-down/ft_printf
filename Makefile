# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 16:21:28 by sgendel           #+#    #+#              #
#    Updated: 2022/01/12 22:07:42 by sgendel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

LIST	=	srcs/ft_printf.c\
			srcs/ft_commonprint.c\
			srcs/ft_itoa.c\
			srcs/ft_strlen.c\
			srcs/ft_pointer.c\
			srcs/ft_unsignedn.c\
			srcs/ft_hex_lower.c\
			srcs/ft_hex_upper.c

OBJ		=	$(patsubst %.c, %.o, $(LIST))

HEADER = includes/ft_printf.h

FLAGS	=	-Wall -Werror -Wextra

all:		$(NAME)

$(NAME) :	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

clean:
			@rm -f $(OBJ)

fclean:		clean
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
