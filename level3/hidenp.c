#include <unistd.h>

char	hidenp(char *s1, char *s2)
{
	while(*s2 && *s1)
	{
		if(*s2 == *s1)
			s1++;
		s2++;
	}
	if (*s1 == '\0')
		return ('1');
	return ('0');
}

int	main(int argc, char *argv[])
{
	int	resp;

	if (argc == 3)
	{
		resp = hidenp(argv[1], argv[2]);
		write (1, &resp, 1);
	}
	write (1, "\n", 1);
	return (0);
}
