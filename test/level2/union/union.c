#include <unistd.h>

void ft_union(char *str1, char *str2)
{
	char arr[128];
	int i = 0;
	while ( i <= 128)
		arr[i++] = 0;

	i = 0;
	while (str1[i])
	{
		if (arr[str1[i]] == 0)
		{
			write(1, &str1[i], 1);
			arr[str1[i]] = 1;
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (!arr[str2[i]])
		{
			write(1, &str2[i], 1);
			arr[str2[i]] = 1;
		}
		i++;
	}

}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
