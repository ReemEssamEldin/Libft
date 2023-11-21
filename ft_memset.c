void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *tmp_ptr;
    tmp_ptr = (unsigned char *) str;
    
    while (n > 0)
    {
        *tmp_ptr = (unsigned char) c;
        n--;
        tmp_ptr++;
    }
    return(str);
}