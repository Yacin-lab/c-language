#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	srand(time(NULL));

        int number = rand() % 90;		// hawl mn be3d dir valure aleatoire mabin tow numbers float
	int valide;
	int guess;

	do {
		printf("Guess a number: ");
		valide = scanf("%d", &guess);

		if (!valide) {
			printf("Invalide input!\n");
			while(getchar() != '\n');
			continue;

		}
		
		if (guess == number) {
			printf("\ncorrect! ✅\n\n");
			break;

		} else if (guess < number)
			printf("LA [%d] SGHAR MNO ❌\n\n", guess);

		else if (guess > number)
			printf("LA [%d] KBAR MNO ❌\n\n", guess);

	} while (guess != number);

        return 0;
}
