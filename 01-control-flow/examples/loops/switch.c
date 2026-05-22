#include <stdio.h>

int main(void) {
    char alpha;

    printf("Enter an letter (A, B, C, D): ");
    scanf(" %c", &alpha);

    switch (alpha) {
        case 'A':
            printf("Appel\n");
            break;
        case 'B':
            printf("Banana\n");
            break;
        case 'C':
            printf("Compiler\n");
            break;
        case 'D':
            printf("Danger\n");
            break;
        default:
            printf("Error! Invalid input\n");
    }

    return 0;
}
