unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev;
	int	i;

	rev = 0;
	i = 8;
	while(i--)
	{
		rev = (rev << 1) | (octet & 1);
		octet >>= 1;
	}
	return (rev);
}

#include <stdio.h>

int	main(void)
{

	printf("Original: %d, Reversed: %d\n", 65, reverse_bits(65));
	printf("Original: %d, Reversed: %d\n", 16, reverse_bits(16));
	printf("Original: %d, Reversed: %d\n", 123, reverse_bits(123));
	printf("Original: %d, Reversed: %d\n", 255, reverse_bits(255));
	return(0);
}
