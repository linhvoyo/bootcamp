#include <unistd.h>

char *ft_strrev(char *str)
{
	char temp;

	int length = 0;
	while (str[length])
		length++;

	int i = 0;
	while (i < length - 1)
	{
		temp = str[i];
		str[i] = str[length - 1];
		str[length - 1] = temp;
		i++;
		length --;
	}

	return (str);
}

int main (int argc, char **argv)
{
	int i = 0;
	if (argc == 2)
	{
		ft_strrev(argv[1]);
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
