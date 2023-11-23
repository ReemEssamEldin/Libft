
#include <stdio.h>
#include <string.h>
/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

	if (little[0] == '\0')
		return ((char *)big);

	while ((little[i] != '\0') && (i < len))
	{
		while ((little[i+j] == little[j]) && (little[i+j]) && (i + j < len))
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
*/

int	main(void)
{
    /*
	char	all[] = "The quick brown fox jumps over the lazy dog";
	char	string[30] = "zy dog";
	char	*result;
	result = ft_strnstr(all, string, 10);
	printf("My  function: %s \n", result);
    */

	char	all1[] = "The quick brown fox jumps over the lazy dog";	
	char	string1[30] = "zy dog";
	char	*result1;
	result1 = strnstr(all1, string1, 10);
	printf("The function: %s \n", result1);
}