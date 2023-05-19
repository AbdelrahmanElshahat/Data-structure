#include"stdio.h"
#include"stack.h"
int main(){
    Stack s;
    CreateStack(&s);
    Push(5,&s);
    Push(6,&s);
    printf("Stack size is %d\n",StackSize(&s));
    StackEntry e;
    StackTop(&e,&s);
    printf("Stack top is %d\n",e);
    return 0;
}