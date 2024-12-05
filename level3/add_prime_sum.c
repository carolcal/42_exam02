#include <unistd.h>

int	ft_atoi(char *s)
{
	int	n;

	n = 0;
	if(!*s)
		return (0);
	while(*s)
	{
		n = (n * 10) + (*s - '0');
		s++;
	}
	return (n);
}

int	isprime(int n)
{
	int i;

	if (n == 2 || n == 3)
		return (1);
	if (n <= 1 || n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 5;
	while ((i * i) <= n && i < 46341)
	{
		if (n % i == 0)
		       return (0);
		i++;	
	}
	return (1);

}

void	putnbr(unsigned long long n)
{
	char	c;

	c = n % 10 + '0';
	if(n >= 10)
		putnbr(n / 10);
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	unsigned long long	sum;
	unsigned int	n;
	
	if(argc == 2 && argv[1][0] != '-')
	{
		sum = 0;
		n = ft_atoi(argv[1]);
		while(n > 0)
		{
			if(isprime(n))
			{
				sum = sum + n;
				putnbr(sum);
				write(1, "\n", 1);
			}
			n--;		
		}
		write(1, "Total:", 6);
		putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
