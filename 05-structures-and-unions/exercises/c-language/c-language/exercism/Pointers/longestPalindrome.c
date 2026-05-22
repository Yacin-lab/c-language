#include <stdio.h>
#include <stdlib.h>

void checkPalindrom(char *arr, int left, int right, int *startIndex, int *maxLen) {
    int Len = 1;

    while(left >= 0 && arr[right] && arr[left] == arr[right]) {
        left--;
        right++;
    }
    Len = right - left - 1;

    if(*maxLen < Len) {
        *maxLen = Len;
        *startIndex = left + 1;
    }
}

char* longestPalindrome(char* s) {
    int startIndex = 0;
    int maxLen = 1;
    int i = 0;
    
    while(s[i]) {
        

        checkPalindrom(s, i, i + 1, &startIndex, &maxLen);
        checkPalindrom(s, i, i, &startIndex,  &maxLen);

        // int Len = (LenOdd >= LenEven) ? LenOdd : LenEven;
        
        i++;
    }

    char *palindrom = malloc(maxLen * sizeof(char) + 1);
    if(!palindrom)
        return (0);
    
    for(int i = 0; i < maxLen; i++)
        palindrom[i] = s[startIndex++];
    
    palindrom[maxLen] = '\0';

    return (palindrom);
}

int main(void) {
    char str[] = "abcdd";

    char *palindrome = longestPalindrome(str);
    
    printf("\n%s\n", palindrome);

    free(palindrome);
    return (0);
}