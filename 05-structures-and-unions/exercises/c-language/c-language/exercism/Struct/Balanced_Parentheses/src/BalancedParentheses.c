#include <stdio.h>
#include <stdbool.h>
#include "stack.h"

bool    IsBalanced(char *, Stack *);
bool    IsMatches(DATA_TYPE, DATA_TYPE);

int     main(void) {
    Stack   s;
    char    text[] = "b-{[(x+y)*z]+3}()sd";

    Init(&s);

    if (IsBalanced(text, &s))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");
   
    ClearStack(&s);
    return (0);
}

bool    IsBalanced(char *str, Stack *ptr_stack)
{
    int     i;
    char    popValue = '\0';

    i = 0;
    while (str[i]) {

        // 1. Ila lqina open symbol, npushiw
        if (str[i] == '{' || str[i] == '[' || str[i] == '(') {
            Push(str[i], ptr_stack);
        }
        // 2. Ila lqina close symbol, ntcheckiw m3a akher symbol fstack
        else if (str[i] == '}' || str[i] == ']' || str[i] == ')') {
            pop(&popValue ,ptr_stack);
            if (!IsMatches(popValue, str[i])) {
                return (false);
            }
        }
        i++;
    }

    // 3. ila khwa stack y3ni balanced
    return (IsEmpty(ptr_stack));
}

bool    IsMatches(DATA_TYPE Symbol, DATA_TYPE OppositeSymbol) {
    
    switch (Symbol) {
        case ('('):
            return (OppositeSymbol == ')');
        case ('['):
            return (OppositeSymbol == ']');
        case ('{'):
            return (OppositeSymbol == '}');
    }
    return (1);
}