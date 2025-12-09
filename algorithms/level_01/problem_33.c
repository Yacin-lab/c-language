#include <stdio.h>

int main () {
        int Month;
        char months[12][10] = {"January", "February", "March",
                		"April", "May", "June", "July", "August",
				"September", "October", "November", "December"};
        do {
        printf("Enter Month: ");
        scanf("%d", &Month);
        if (Month < 1 || Month > 12)
                printf("Wrong Month\n");
        } while (Month < 1 || Month > 12);

        printf("Its %s\n", months[Month-1]);

        return 0;
}
