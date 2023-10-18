
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while(i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    if (!src[i])
        dest[i] = '\0';
    return (dest);
}