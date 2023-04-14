void    *memset(void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char cbyte;

    *str = s;
    cbyte = c;
    while(n--)
    {
        *str++ = cbyte;
    }
    return (s);
}