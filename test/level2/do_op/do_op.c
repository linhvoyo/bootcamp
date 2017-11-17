#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '*')
			printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			printf("%d\n", atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
		if (argv[2][0] == '+')
			printf("%d\n", atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			printf("%d\n", atoi(argv[1]) - atoi(argv[3]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
