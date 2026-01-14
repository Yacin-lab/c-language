#include <stdio.h>

// Factorial
/*int factorial(int n)
{
	if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}*/

// Power
/*int power(int base, int exp)
{
	if(exp == 0)
		return 1;
	return base * power(base, exp - 1);
}*/

// Print string recursively
/*void print_str(char *s)
{
	if(*s == '\0')
		return;
	printf("%c", *s);
	print_str(s + 1);		// (s++) It increment later, so the value won't change,
							// whereas (s + 1) increment in directly.
}*/

// String length
/*int ft_strlen(char *s)
{
	if(*s == '\0')
		return (0);
	return 1 + ft_strlen(s + 1);
}*/

// Print reverse string
/*void print_reverse(char *s)
{
	if(*s == '\0')
		return;
	print_reverse(s + 1);
	printf("%c", *s);
}*/

// Fibonacci

int main(void)
{
	printf("\nOutput: \n");
	//printf("%d\n", factorial(5));

	//printf("%d\n", power(2, 3));

	//print_str("Hello");

	//printf("%d\n", ft_strlen("Hello"));

	//print_reverse("Hello");

	printf("%d\n", fib(6));

	return (0);
}
