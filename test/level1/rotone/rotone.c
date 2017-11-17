#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] < 'z')
				ft_putchar(str[i] + 1);
			else 
				ft_putchar(str[i] - 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] < 'Z')
				ft_putchar(str[i] + 1);
			else 
				ft_putchar(str[i] - 1);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
