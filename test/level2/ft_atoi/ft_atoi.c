#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1; 
	int val = 0;	
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 31)
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			val = val * 10 + str[i] - '0';
		i++;
	}
	return (val * sign);
}

int main(void)
{
	
	printf("%d", ft_atoi("-5565"));
	return (0);

}
