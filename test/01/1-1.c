int	ft_strlen (char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
		i++;

	return(i);
}
#include<stdio.h>
int main()
{
	char c [] = "Hola 42!";
	printf("%s\n", c);
	printf("Str total: %d", ft_strlen(c));
	return(0);
}
