#include <stdio.h>

// The strcmp() is a built-in library function in C. This function takes
// two strings as arguments, compares these two strings lexicographically
// and returns an integer value as a result of comparison.
int ft_strcmp(char *s1, char *s2) {
    int i = 0;

    while(s1[i] && s2[i]) {
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

// int ft_strcmp(char *s1, char *s2) {

//     while(*s1 && *s2 && (*s1 == *s2)) {
//         s1++;
//         s2++;
//     }
//     return (unsigned char)*s1 - (unsigned char)*s2;
// }

int main(void) {
    char s1[] = "Apple";
    char s2[] = "Applet";

    // Compare two strings 
  	// and print result
    int res = ft_strcmp(s1, s2);

    printf("According to the ASCII table,\n");
    if(res == 0)
        printf("string1 and string2 are same\n");
    else if(res < 0)
        printf("string1 is smaller than string2\n");
    else
        printf("string1 is greater than string2\n");

    return(0);
}