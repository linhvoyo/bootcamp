#include <unistd.h>

void print_out(int nb, char c)
{
	int i;
	i = 0;

	while (i < nb)
	{
		write(1, &c, 1);
		i++;
	}

}

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				print_out(argv[1][i] - 'a' + 1, argv[1][i]);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				print_out(argv[1][i] - 'A' + 1, argv[1][i]);
			else 
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

