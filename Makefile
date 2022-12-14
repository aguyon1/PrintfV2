SRCS = ft_printbase.c \
		ft_printchar.c \
		ft_printf.c \
		ft_printhexa.c \
		ft_printmemory.c \
		ft_printsigned.c \
		ft_printstr.c \
		ft_printunsigned.c \
		ft_printpourcent.c \
		ft_strchr.c \
		ft_strlen.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc -Wall -Wextra -Werror

RM = rm -f

.c.o : ${CC} -I. -c $< -o ${<:.c=.o}

all	: ${NAME}

$(NAME) :	${OBJS}
			ar rcs ${NAME} ${OBJS}

bonus :	${OBJS}
		ar rcs ${NAME} ${OBJS}

clean :
	${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re :	fclean all

.PHONY : all clean fclean re bonus