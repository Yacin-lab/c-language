#include <stdio.h>

int main () {
        int ATM_PIN;
	int PIN = 1234;
	int balance = 7500;
	int valide;

        do {
        printf("Enter ATM PIN: ");
        valide = scanf("%d", &ATM_PIN);
	if(valide != 1) {
		printf("Dkhel number machi charachter\n");
		while(getchar() != '\n');
		continue;
	}
        if (ATM_PIN != 1234)
                printf("Wrong PIN\n");
        } while (ATM_PIN != 1234);

        printf("UNLOCKED\nYour Balance is %d\n", balance);

        return 0;
}
