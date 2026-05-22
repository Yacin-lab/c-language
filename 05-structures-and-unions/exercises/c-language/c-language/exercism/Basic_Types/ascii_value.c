#include <unistd.h>
#include <stdio.h>

int main (void) {

	char c;

	printf("Letter:		");
	scanf("%c", &c);
	
	printf("ASCII value:	%d\n", c);

	return 0;
}
