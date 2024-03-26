SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

INC = ./includes/

TARGET = libft.a

AR = ar

ARFLAGS = rcs

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(INC)

$(TARGET) : $(OBJS)
	$(AR) &(ARFLAGS) $(TARGET) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY: all clean fclean re
