#include <stdlib.h>
#include <unistd.h>

char *init_ptr(void)
{
	char *ptr;
	int i;

	ptr = (char *)malloc(sizeof(char) * 2050);
	i = 0;
	while (i < 2050)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

void brainfuck(char *str)
{
	char *ptr;
	int i;
	int loop;

	ptr = init_ptr();

	i = 0;

	while (str[i])
	{
		if (str[i] == '>')
			ptr++;
		else if (str[i] == '<')
			ptr--;
		else if (str[i] == '+')
			(*ptr)++;
		else if (str[i] == '-')
			(*ptr)--;
		else if (str[i] == '.')
			write(1, ptr, 1);
		else if (str[i] == '[')
		{
			if (*ptr == 0)
			{
				loop = 0;
				while (str[i])
				{
					if (str[i] == '[')
						loop++;
					if (str[i] == ']')
						loop--;
					if (loop == 0)
						break;
					i++;
				}
			}
		}
		else if (str[i] == ']')
		{
			if (*ptr != 0)
			{
				loop = 0;
				while (str[i])
				{
					if (str[i] == ']')
						loop++;
					if (str[i] == '[')
						loop--;
					if (loop == 0)
						break;
					i--;
				}
			}
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	else 
		write(1, "\n", 1);
	return (0);
}
