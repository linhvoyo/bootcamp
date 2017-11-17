#include <unistd.h>
void print_bits(unsigned char octet)
{
	int div = 128;
	int num = octet;

	while ( div != 0)
	{
		if (div <= num)
		{
			write(1, "1", 1);
			num = num % div;
		}
		else
			write(1, "0", 1 );
		div = div / 2;
	}
}

int main()
{
	print_bits(2);
	return (0);
}
