//
// Created by abdel on 12/22/2020.
//
#include <stdio.h>
#include <stdlib.h>
#ifndef LINKED_STACK_LINKED_STACK_H
#define LINKED_STACK_LINKED_STACK_H
typedef int StackEntery;
typedef struct StackNode{
StackEntery entery;
struct StackNode *next;
}stackNode;
typedef struct Stack{
    struct Stacknode *top;
    int size;
}stack;
void CreateStack(stack *ps);
void Push(StackEntery e ,stack *ps);
void pop (StackEntery *e,stack *ps);
int StackEmpty(stack *ps);
int Stackfull(stack *ps);
void TraverseStack(stack *ps ,void (*pf)(StackEntery));
void clear(stack *ps);
int Stacksize(stack *ps);
int Stacktop(StackEntery *pe ,stack *ps);
#endif //LINKED_STACK_LINKED_STACK_H
