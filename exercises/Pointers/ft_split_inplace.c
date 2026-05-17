#include <stdio.h>

int ft_split_inplace(char *str, char delimiter, char **out) {
    int inWord = 0, count = 0;

    if(!str)
        return 0;
    
    while(*str) {
        if(*str == delimiter) {
            *str = '\0';
            inWord = 0;
        }
        else if(!inWord) {
            *out++ = str;
            count++;
            inWord = 1;
        }
        str++;
    }
    return count;
}

int main(void) {
    char str[] = "one,,two,,,,three";
    char *out[3];
    int n = ft_split_inplace(str, ',', out);

    printf("n = %d\n", n);

    for(int i = 0; i < n; i++) {
        printf("%s\n", *(out + i));
    }

    return (0);
}