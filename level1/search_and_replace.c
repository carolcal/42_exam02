#include <unistd.h>

void	print_replace(char *str, char org, char rep)
{
	while (*str)
	{
		if(*str == org)
			*str = rep;
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	if(argc == 4 && !argv[2][1] && !argv[3][1])
		print_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
