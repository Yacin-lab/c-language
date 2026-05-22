#include <stdio.h>

#define MAX_SIZE 20
#define DATA_TYPE char

// C Program to demonstrate how to Implement a Stack
typedef struct {
    DATA_TYPE data[MAX_SIZE];
    int top;
} Stack;

/* initialize the stack */
void    Init(Stack *);

/* isFull checks if capacity (size) is reached */
int     IsFull(Stack *);

/* isEmpty checks if stack has no elements */
int     IsEmpty(Stack *);

/* Push adds an element at the top of the stack.
   Over flow happens when pushing to a full stack */
int     Push(DATA_TYPE , Stack *);

/* Pop removes and returns the top element.
   Underflow happens when popping from an empty stack */
DATA_TYPE     pop(DATA_TYPE *, Stack *);

/* Peek returns the top element without removing it */
DATA_TYPE     Peek(Stack *);

/* Size of elements in the stack */
int     StackSize(Stack *);

/*  Clear the stack */
void    ClearStack(Stack *);

int     main(void) {
    Stack       s;
    DATA_TYPE   value = 'A';
    DATA_TYPE   popValue;

    Init(&s);
/* --------------------------------PUSH------------------------------ */

    for (int i = 0; i < 6; i++) {    
        if (Push(value, &s))
            printf("\n> Stack is Full <\n");
        else
            printf("Added %c successfully\n", value);
        value++;
    }

    printf("\nSize of elements in stack: %d\n", StackSize(&s));
/* --------------------------------PEEK------------------------------- */
    
    printf("\ntop = %c\n\n", Peek(&s));

/* ---------------------------------POP------------------------------- */

    for (int i = 0; i <= 6; i++) { 
        
        if (pop(&popValue, &s))
            printf("\n> Stack is Empty <\n");
        else
            printf("Poped %c successfully\n", popValue);
    }
/* -------------------------------SIZE-------------------------------- */
    printf("\nSize of elements in stack: %d\n", StackSize(&s));
   
    ClearStack(&s);
    return (0);
}

void    Init(Stack *ptr_s) {    
    
    ptr_s->top = -1;
}

int     IsFull(Stack *ptr_s) {
    
    /* top start from 0, size start from 1 */
    return (ptr_s->top >= MAX_SIZE - 1);
}

int     IsEmpty(Stack *ptr_s) {
    
    return (ptr_s->top == -1);
}

int     Push(DATA_TYPE value, Stack *ptr_s) {

    if (IsFull(ptr_s)) {
        return (1);
    } else {
        /* If we don't increment top initially, we will overwrite the previous data */
        ptr_s->top++;
        ptr_s->data[ptr_s->top] = value;
    }
    return (0);
}

DATA_TYPE     pop(DATA_TYPE *ptr_element, Stack *ptr_s) {

    if (IsEmpty(ptr_s))
        return (1);
    *ptr_element = ptr_s->data[ptr_s->top];
    ptr_s->top--;
    return (0);
}

DATA_TYPE     Peek(Stack *ptr_s) {

    if (IsEmpty(ptr_s))
        return (0);
    return (ptr_s->data[ptr_s->top]);
}

int     StackSize(Stack *ptr_s) {
    
    if (IsEmpty(ptr_s))
        return (0);
    return (ptr_s->top + 1);
}

void    ClearStack(Stack *ptr_s) {

    ptr_s->top = -1;
}