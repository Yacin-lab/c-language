#include <unistd.h>
#include <stdio.h>

int main (void) {
        int     n;
        int     i,      j;

        write(1, "Enter the size n: ", 18);
        scanf("%d", &n);

        i = 0;
        while (i < n) {

                j = 0;
                while (j <= i) {

                        write(1, "*", 1);
                        j++;
                }
                write(1, "\n", 1);
                i++;
        }

        return 0;
}
