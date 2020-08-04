unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    int j;

    i = 0;
    while (i < size - 1)
    {
        dest[i] = src[i];
        if (src[i] == '\0' || j == 1)
        {
            j = 1;
            dest[i] = '\0';
        }
        i++;
    }
    dest[size - 1] = '\0';
    j = 0;
    while (dest[j] < '\0')
        j++;
    return j;

}