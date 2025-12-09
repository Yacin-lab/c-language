#include <stdio.h>

int main () {
	int ATMPIN;
	int PIN = 1596;
	int balance = 7500;
	int valide;
	int ctr = 0;
	
	do {
	
	printf("Enter ATM PIN: ");
	valide = scanf("%d", &ATMPIN);

	if (valide != 1) {	// check if user enter only numbers
		printf("Error! wrong input\n");
		while(getchar() != '\n');
		continue;
	}

	if (ATMPIN != PIN)	// check if code pin correct
		printf("Wrong Pin\n");
	else {
		printf("UNLOCKED ✅\nYour balance is %d$\n", balance);
		break;
	}

	ctr++;
	} while (ctr < 3);	// user have just 3 chance

	if (ctr == 3)
		printf("❌ You passed 3 chance. Card Blocked!\n");

	return 0;
}
