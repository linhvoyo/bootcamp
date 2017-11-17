#include <stdio.h>
#include <unistd.h>

int	check_a(char *str)
{
	int i;
	i = 0;

	while (str[i])
		{
			if (str[i] == 'a')
				return (1);
			i++;
		}
	return (0);
}


int main(int argc, char **argv)
{

	int i;
	i = 1;

	if (argc == 1)
		write(1, "a",1);

	while (i < argc)
	{
		if (check_a(argv[i]))
			return (write(1, "a\n", 2));
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

