AR = ar
ARFLAGS = crv
CC = gcc
INCLUDES_DIR = ./includes
INCLUDES = $(INCLUDES_DIR)/ft.h
CFLAGS = -c -Wall -Wextra -Werror -I$(INCLUDES_DIR)
TARGET = libft.a
SRCSDIR = ./srcs
SRCS = $(addprefix $(SRCSDIR)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(TARGET)

re : fclean all