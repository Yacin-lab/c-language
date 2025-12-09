#include <unistd.h>

/*int main () { // print A to Z
	char c = 'A';

	while (c <= 'Z') {
		write(1, &c, 1);
		write(1, "\n", 1);
		c++;
	}

	return 0;
}*/

/*int main () { // print A to Z
        int c = 65;
	char d;

        while (c <= 90) {
		d = (char)c;
		write(1, &d, 1);
		write(1, "\n", 1);
                c++;
        }

        return 0;
}*/

int main () { // print A to Z and a to z
        char c = 'A';

        while (c <= 'z') {
                write(1, &c, 1);
                write(1, "\n", 1);
		
		if (c == 'Z')
			c = 'a' - 1;
                c++;
        }

        return 0;
}
