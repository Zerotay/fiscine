#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{

    
    char *strs[] = {"good"};
	//, "morning", "rewind", "your", "clockwork", "mainspring"};
    char sep[] = ",m ";
    int size = 1;
    char *i = ft_strjoin(size, strs, sep);

    
    printf("%s\n", i);
    free(i);
    return 0;
}
