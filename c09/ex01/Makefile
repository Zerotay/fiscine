AR = ar
ARFLAGS = crv
CC = gcc
CFLAGS = -Wall -Wextra -Werror

TARGET = libft.a

INCLUDES = ./includes/ft.h

SRCS = $(addprefix ./srcs/, ft_putchar.c \
       ft_putstr.c \
       ft_strcmp.c \
       ft_strlen.c \
       ft_swap.c)

OBJS = $(SRCS:.c=.o)

all : $(TARGET)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

$(TARGET) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

