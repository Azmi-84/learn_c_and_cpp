#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 100

//  stack structure defenation

typedef struct {
    char arr[MAX];
    int top;
} Stack;

//  initializing the stack
void int (Stack *s) {
    s -> top == -1;
}

bool isEmpty (Stack *s) {
    return s -> top == -1;
}

//  pushing element onto the stack
void push(Stack *s) {
    s -> arr[++(s->top)]
}