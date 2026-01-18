#include <stdio.h>

// Print reverse string
void print_reverse(char *s)
{
	if(*s == '\0')
		return;
	print_reverse(s + 1);
	printf("%c", *s);
}

int main(void)
{
	printf("\nOutput: ");
	print_reverse("\nHello");

	return (0);
}