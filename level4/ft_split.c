#include <stdlib.h>

int count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (str[i]<= 32)
			count++;
		i++;
	}
	return (count);
}

void	fill(char *str, char **split)
{
	int	i = 0;
	int	j = 0;
	int	k;
	int		len;

	while (str[i])
	{
		k = 0;
		if (str[i] > 32)
		{
			len = 0;
			while (str[len] > 32)
				len++;
			split[j] = malloc(len * sizeof(char));
			while (str[i] > 32)
			{
				split[j][k] = str[i];
				i++;
				k++;
			}
			split[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	split[j] = NULL;
}

char	**ft_split(char *str)
{
	char	**split;
	int		size;

	size = count_words(str);
	split = (char **)malloc(size * sizeof(char *));
	fill(str, split);
	return (split);
}
#include <stdio.h>
int	main()
{
	char **array = ft_split("  eu nao	existo longe devoce   .");
	for(int i = 0; array[i] != NULL; i++)
	{
		printf("%s\n", array[i]);
		free(array[i]);
	}
	free(array);
	return (0);
}