#include <stdio.h>

int strStr(char* haystack, char* needle) {
    int i, j, index;

    if(!needle)
        return (0);

    i = 0;
    while(haystack[i]) {
        index = i;
        j = 0;
        while(haystack[j + i] && needle[j] && haystack[j + i] == needle[j]) {
            j++;
        }

        if(needle[j] == '\0')
            return (index);
        i++;
    }

    return (-1);
}

int main(void) {
    char st[] = "leetcode";
    char nd[] = "tco";

    printf("%d\n", strStr(st, nd));

    return (0);
}