//
// Created by abdel on 12/22/2020.
//

#include "linked stack.h"
void print(StackEntery e){
    printf("%d\n",e);
}
int main() {
    stack s1;
    CreateStack(&s1);
    int choice=0;
    int x;
    int y;
    printf("**** Welcome to our Linked Stack program ****\n"
           "Choose The Operation :\n"
           "1-To Push Elements To Stack:\n"
           "2-To pop Element from The stack:\n"
           "3-To Print All Elements of the Stack:\n"
           "-1 -To Exit\n");
    while (choice != -1){
        printf("Your choice :");
        scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter Element :");
            scanf("%d", &x);
            Push(x, &s1);
            break;
        case 2:
            pop(&y, &s1);
            printf(" Element poped :%d\n",y);
            break;
        case 3:
            TraverseStack(&s1, print);
            break;
    }
}
    return 0;
}