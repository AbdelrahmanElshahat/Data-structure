//
// Created by abdel on 12/22/2020.
//
#include <stdlib.h>
#include "linked stack.h"
void CreateStack(stack *ps){
    ps ->top = NULL;
    ps->size = 0;
}
void Push(StackEntery e ,stack *ps){
    stackNode *pn = (stackNode*) malloc(sizeof(stackNode));
    pn -> entery=e;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
}
void pop (StackEntery *pe,stack *ps){
    stackNode *pn;
    *pe=ps->top->entery;
    pn = ps->top;
    ps ->top = ps ->top->next;
    free(pn);
    ps->size--;
}
int StackEmpty(stack *ps){
    return ps->top == NULL;
}
int Stackfull(stack *ps){
    return 0;
}
void clear(stack *ps){
    stackNode *pn = ps->top;
    while (pn){
        pn = pn->next;
        free(ps->top);
        ps->top=pn;
    }
    ps->size=0;
}
void TraverseStack(stack *ps ,void (*pf)(StackEntery)){
    stackNode *pn = ps->top;
    while (pn){
        (*pf)(pn->entery);
pn= pn->next;
    }
}
int Stacksize(stack *ps){
    return ps->size;
}
int Stacktop(StackEntery *pe ,stack *ps){
    return *pe=ps->top->entery;
}