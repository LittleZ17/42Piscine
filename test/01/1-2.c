#include<unistd.h>

int	letras(char c);
int	main(int ac, char **av)
{
	int r;

	if(ac == 2)
	{
		while(*av[1])
		{
			r = letras(*av[1]);
				while(r--)
					write(1, av[1], 1);
				av[1]++;
		}
	}
	write(1, "\n", 1);
}

int letras(char c)
{
	int r;
	if (c >= 'A' && c <= 'Z')
		r = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		r = c - 'a' + 1;
	else
		r = 1;
	return(r);
}
