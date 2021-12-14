# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/07 11:38:54 by abarchil          #+#    #+#              #
#    Updated: 2021/12/13 15:41:47 by ael-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER	=	ft_printf.h

BNS_HEADER	=	ft_printf_bonus.h

SRC_FILE = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
			ft_puthex.c ft_putadd.c \

BNS_SRC_FILE =	ft_printf_bonus.c conversions_manager.c flags_manager.c hash_flag.c \
			space_flag.c plus_flag.c \
			
OBJ_FILE = ft_printf.o ft_putchar.o ft_putstr.o ft_putnbr.o\
			ft_puthex.o ft_putadd.o \

BNS_OBJ_FILE =	ft_printf_bonus.o conversions_manager.o flags_manager.o hash_flag.o \
			space_flag.o plus_flag.o\

all: $(NAME) 
	
$(NAME):	$(HEADER) $(OBJ_FILE) 
	@ar rc $(NAME) $(OBJ_FILE)
	@echo "COMPILED √"

$(OBJ_FILE):	$(SRC_FILE)
	@gcc -Wall -Werror -Wextra -c $(SRC_FILE)
	@echo "Building..."

$(BNS_OBJ_FILE):	$(BNS_SRC_FILE)
	@gcc -Wall -Werror -Wextra -c $(BNS_SRC_FILE)
	@echo "Building..."

bonus : $(NAME) $(BNS_HEADER) $(BNS_OBJ_FILE) 
	@ar rcb ft_printf.o $(NAME) $(BNS_OBJ_FILE)
	@echo "COMPILED √"

clean :
	@rm -rf $(OBJ_FILE) $(BNS_OBJ_FILE)
	@echo "Cleaning..."

fclean : clean
	@rm -rf $(NAME)
	
re : fclean $(NAME)
