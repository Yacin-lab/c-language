#include <stdio.h>

// This function lexicographically compares the first n 
// characters from the two null-terminated strings and 
// returns an integer based on the outcome.
int ft_strncmp(char *s1, char *s2, int n) {
    int i = 0;
    // if n is 0, the standard function should return 0
    if(n <= 0)
        return (0);

    while(s1[i] && s2[i] && i < n - 1) {
        if(s1[i] != s2[i])
            break;
        i++;
    }
    // Typecasting char to unsigned char.
    // Standard strncmp interprets characters as unsigned char. 
    // Using char (which can be signed) for the return subtraction (-) may
    // produce incorrect results for non-ASCII characters.
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

// int ft_strncmp(char *s1, char *s2, int n) {

//     while(*s1 && *s2 && (*s1 == *s2) && n - 1 > 0) {
//         s1++;
//         s2++;
//         n--;
//     }
//     return (unsigned char)*s1 - (unsigned char)*s2);
// }

int main(void) {
    char s1[] = "Apple";
    char s2[] = "Applet";
    
  	// Compare two strings upto 
  	// 4 characters and print result
    int res = ft_strncmp(s1, s2, 5);

    if (res == 0) 
        printf("s1 and s2 are same\n");
  	else if (res < 0)
      	printf("s1 is lexicographically smaller than s2\n");
  	else
      	printf("s1 is lexicographically greater than s2\n");

    return(0);
}