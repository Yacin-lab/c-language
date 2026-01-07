#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// KEYLIMITES:
// - number of blocks
// - also number of characters per block
// Example: 4 -> XXXX-XXXX-XXXX-XXXX
#define KEYLIMITES 4

// Character used to separate blocks
#define SEPARATOR '-'

// Enum that defines the type of character to generate
enum typeChar
{
    SmallLetter = 1,
    CapitalLetter,
    Symbol,
    Digit,
};

// Generate one random character based on the given type
// Returns an ASCII character
int randomLetters(enum typeChar type)
{
    int start;
    int end;
    switch(type)
    {
        case SmallLetter:
            start = 97; end = 122;  // 'a' to 'z'
            break;
        case CapitalLetter:
            start = 65; end = 90;   // 'A' to 'Z'
            break;
        case Symbol:
            start = 33; end = 47;   // '!' to '/'
            break;
        case Digit:
            start = 48; end = 57;   // '0' to '9'
            break;
        default:
            return (-1);
    }
    return (rand() % (end - start + 1) + start);
}

// Ask the user for a positive number
// Keeps asking until the number > 0
int checkPositiveNumber(char *message)
{
    int number;
    do {
        printf("%s\n", message);
        scanf("%d", &number);
    } while(number <= 0);
    return (number);
}

// Fill one block of KEYLIMITES characters
// key  : buffer where the key is being built
// pos  : current position inside the buffer
// type : type of characters to generate
void genarateWord(char *key, int *pos, enum typeChar type)
{
    int i = 0;
    while(i < KEYLIMITES)
    {
        key[*pos] = randomLetters(type);
        (*pos)++;   // move to next position in buffer
        i++;
    }
}

// Generate a complete key:
// XXXX-XXXX-XXXX-XXXX
char *generateKey(char *key, enum typeChar type)
{
    int pos = 0;    // current position in key buffer
    int i = 0;      // block counter

    while(i < KEYLIMITES) // loop that controls the number of blocks
    {
        genarateWord(key, &pos, type);

        // add separator between blocks (not after last block)
        if(i < KEYLIMITES - 1)
            key[pos++] = SEPARATOR;
        i++;
    }
    key[pos] = '\0';
    // return compelte key with separator
    return key;
}

// Print N generated keys
void printKeys(short n)
{
    char key[100];  // enough space for the generated key
    int i = 1;
    while(i <= n)
        printf("Key [%d] : %s\n", i++, generateKey(key, CapitalLetter));
}

int main(void)
{
    srand((unsigned)time(NULL));    // initialize random seed
    printKeys(checkPositiveNumber("Enter the number: "));
    return (0);
}