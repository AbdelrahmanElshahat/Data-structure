//
// Created by abdelrahmanelshahat on 22/12/2021.
//
#include"queue.h"
void PrintQueue( QueueEntery e){

        printf("%d\n",e);

}
int main(){
    Queue q1;
    Create_Queue(&q1);
    QueueEntery x=1;
    QueueEntery y=2;
    QueueEntery z=3;
    QueueEntery s;
    Append(x,&q1);
    Append(y,&q1);
    Append(z,&q1);
    TraverseQueue(&q1,PrintQueue);
    printf("%d\n",QueueSize(&q1));
    Serve(&s,&q1);
    printf("%d\n",QueueSize(&q1));
    TraverseQueue(&q1,PrintQueue);
    return 0;
}