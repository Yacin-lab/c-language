#include <unistd.h>
#include <stdio.h>

int main (void) {
        
        int i, j;

        i = 0;
        while (i < 3) {

                j = 1;
                while (j <= 4) {

                        printf("%d ", j);
                        j++;
                }
		printf("\n");		// fflush(stdout); 
                			// write(1, "\n", 1); bach tfhm anak ila st3mlti write ghatba3 \n
					// mobachara 9bal maytfrgh buffer dyal printf, ghatsb9ha
					// hit hya ma3ndhach buffer w buffer dyal printf makaytfragh hta
					// yl9a \n wla ysali prgm
                i++;
        }

        return 0;
}
