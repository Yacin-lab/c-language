#include <stdio.h>

// The strlen() function in c is used to find the length of a string.
// It returns the number of characters in a string, excluding the null terminator ('\0').
unsigned int ft_strlen(const char *str) {
    
    if(*str =='\0')
        return(0);
    
    return (1 + ft_strlen(str + 1)); // Call function with pointer to the next element

    // Call:   1 + ft(Hello) --> 1 + ft(ello) --> 1 + ft(llo) --> 1 + ft(lo) --> 1 + ft(o) --> ft(\0)
    // Return: 1 + 4 = 5     <-- 1 + 3 = 4    <-- 1 + 2 = 3   <-- 1 + 1 = 2  <-- 1 + 0 = 1 <-- 0
}

// int ft_strlen(char *s) {
//   int count = 0;
  
//   while(*s) {
//     s++;
//     count++;
//   }
//   return count;
// }

int main(void) {
    char s[] = "hello";

    // Finding and printing length of string s
    printf("Output: %d\n", ft_strlen(s)); // 5
    return(0);
}