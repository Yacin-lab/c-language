#include <stdio.h>

int main(void) {

	int choice;
	int N;
	int i;
	
	do {
		printf("1. Print numbers from 1 to N\n"
                "2. Check if a number is even or odd\n"
                "3. Exit\n"
                "\nchoice: "
        	);
        	scanf("%d", &choice);
		
		if(choice == 3)
                        break;

		if(choice < 1 || choice > 3) {
			while(getchar() != '\n');
			printf("\nInvalid input\n");
		}
	} while(choice < 1 || choice > 3);
	
	switch(choice) {
                case 2:
                        printf("Enter a number: ");
                        scanf("%d", &N);

                        if(N % 2 != 0)
                                printf("The number is Odd\n");
                        else
                                printf("The number is Even\n");
                        break;
                case 1:
                        printf("Enter a number: ");
                        scanf("%d", &N);

                        i = 1;
                        while(i <= N) {
                                printf("%d\n", i);
                                i++;
                        }
                        break;
	}
	return (0);
}
