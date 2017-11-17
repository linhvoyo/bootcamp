#include <unistd.h>
#include <stdio.h>
# define dl(x) (x == ' '|| x == '\t' || x == '\0')

void last_word(char *str)
{
	int length = 0;
	while (str[length])
		length++;
	while (length - 1 >=  0)
	{
		if (!dl(str[length]) && dl(str[length-1]))
			break;
		length--;
	}	
	while (str[length])
	{
		if (!dl(str[length]))
			write(1, &str[length], 1);
		length++;
	}

}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}	
	write(1, "\n", 1);
}
