#include <unistd.h>
#include <stdlib.h>

int	new_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		if(*str >= 'A' && *str <= 'Z')
			len++;
		len++;
		str++;
	}
	return (len);
}

char	*create_snake(char *str, int len)
{
	int	i;
	int	j;
	char	*snake;

	i = 0;
	j = 0;
	snake = (char *)malloc(len * sizeof(char));
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			snake[j++] = '_';
			snake[j++] = str[i++] + 32;
		}
		else
			snake[j++] = str[i++];
	}
	snake[j] = '\0';
	return (snake);
}

int	main(int argc, char *argv[])
{
	char	*snake;
	int	len;

	if (argc == 2)
	{
		len = new_strlen(argv[1]);
		snake = create_snake(argv[1], len + 1);
		write(1, snake, len);
		free(snake);
	}
	write (1, "\n", 1);
	return (0);
}
