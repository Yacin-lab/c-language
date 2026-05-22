#include <stdio.h>

int main (void) {
	int pin = 5478;
        int pswd, valide;

	do {
	printf("Enter a password: ");
	valide = scanf("%d", &pswd);
	
	if(!valide) {
		printf("Invalide input!\n");
		while (getchar() != '\n');
		continue;
	}

	if (pswd < 1000 || pswd > 9999) {
		printf("Error! Password must have 4 digits.\n");
		printf("-----------------------------------\n");
		continue;
	}

	if (pswd == pin) {
		printf("\nCorrect. Welcome!\n\n");
	} else {
		printf("Wrong. Try again.\n");
		printf("-----------------------------------\n");
	}

	} while (pswd != pin);

        return 0;
}
