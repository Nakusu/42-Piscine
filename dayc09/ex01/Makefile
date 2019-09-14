NAME	= libft.a

LOCA1 	= ./srcs/

LOCA2	= ./includes/

SRCS	= ${LOCA1}ft_putchar.c ${LOCA1}ft_swap.c ${LOCA1}ft_putstr.c ${LOCA1}ft_strlen.c ${LOCA1}ft_strcmp.c

RM		= rm -f

AR		= ar -rcs

OBJS	= ${SRCS:.c=.o}

${CC}	= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${LOCA2}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean :	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
