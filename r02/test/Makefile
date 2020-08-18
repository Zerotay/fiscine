CC = gcc
CFLAGS = -Wall -Wextra -Werror
SBJS = $(wildcard *.c)
OBJS = $(SBJS:.c=.o)
TARGET = rush-02

.c.o :
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

all : $(TARGET)

clean :
	rm -f *.o

fclean :
	rm -f *.o
	rm -f $(TARGET)

