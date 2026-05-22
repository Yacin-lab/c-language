#include <unistd.h>

int     main() {

	char str[] = "abcde";

	int size = sizeof(str) / sizeof(str[0]);
	int len = size - 1;

	int i, j;

	// loop: kol mra b9a tn9s mn length mn tarf w b9a tprint ga3 comb sub possible
	for (len > 0) {

		write(1, "\nAll combinations of length: ", 29);
		char c = len + '0';
		write(1, &c, 1);
		write(1, "\n", 1);

		/*
		   str[i + (len - 1)] : kantcheck biha wach akhir char mn str kayn
		   (len - 1) bach mankhrej 3la str w fnafs lwa9t nkhli blasa l '\0'
		   w bach mankhrj 3la current len dyal substring
		   Example *str = "slm" <-- len = 3 but str[len] == '\0' str[len - 1] == 'm'
		   */
		i = 0;
		while (str[i + (len - 1)]) {

			/*
			   print substring start from i to current len
			   kant7rak dema wst str b len (like window of length = len)
			   */
			j = 0;
			while (j < len) {

				write(1, (str + (i + j)), 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		len--;
	}
	return (0);

	/*
	   Example of all combations:

	   0	1	2	3
	   ======================
	   a	b	c	d       <- len = 4
	   ----------------------
	   a	b	c           	<- len = 3
	   	b	c	d
	   ----------------------
	   a	b              		<- len = 2
	  	b	c
	   		c 	d
	   ----------------------
	   a                   		<- len = 1
	   	b
	   		c
	   			d
	   ----------------------
	   */
}


