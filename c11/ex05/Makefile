CC = gcc -Wall -Wextra -Werror

ANS = do-op
SB = $(wildcard *.c)
OB = $(SB: .c=.o)

$(ANS) : $(OB)
	$(CC) -o $@ $^

all : $(ANS)

.c.o :
	$(CC) -c -o $(<:.c=.o) $<

clean :
	rm -f $(OB)

fclean : clean
	rm -f $(ANS)
