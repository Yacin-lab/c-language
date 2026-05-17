#include <stdio.h>

// In C, strrchr() function is similar to strchr() function 
// used to find the last occurrence of a given character in a string.
char *ft_strrchr(char *s, char c) {
    char *temp = 0;
    int i = 0;

    while(s[i]) {
        if(s[i] == c)
            temp = &s[i];
        i++;
    }
    return temp;
}

int main(void) {
    char s[] = "Hello, World!";
  
  	// Finding the last occurence of 'o' in string s
    char *res = ft_strrchr(s, 'o');

    if (res != 0)
        printf("Character found at: %ld index\n", res - s);
    else
        printf("Character not found\n");

    return(0);
}