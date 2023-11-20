int ft_isalnum(int c)
{
    //The condition can also be ft_isalpha(c) || ft_isdigit(c)
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
    {
        return(1);
    }
    else
    return(0);

}
