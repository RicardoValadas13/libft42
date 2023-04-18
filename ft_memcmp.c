int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1 = (unsigned char *) s1;
    unsigned char *str2 = (unsigned char *) s2;
    
    i = 0;
    if ( n == i)
        return (0);
    while (i < n && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}