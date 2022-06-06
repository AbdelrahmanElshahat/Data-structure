//
// Created by Elshahat on 11/13/2020.
//

#include "queue.h"
void CreateQueue(Queue *pq){
    pq->front = 0;
    pq ->rear = -1;
    pq -> size = 0;
}
void Append(QueueEntry e,Queue *pq){
    if(pq->rear == MAX_QUEUE-1 )
        pq->rear=0;
    else
        pq->rear++;
    pq->entry[pq->rear]=e;
    pq->size++;
}
void Serve (QueueEntry *pe,Queue *pq){
    *pe = pq->entry[pq->front];
    if(pq->front == MAX_QUEUE-1 )
        pq->front=0;
    else
        pq->front++;
    pq->size--;
}
int QueueEmpty(Queue *pq){
    return !pq->size;
}
int QueueFull(Queue *pq){
    return (pq->size == MAX_QUEUE);
}
int QueueSize(Queue *pq){
    return pq->size;
}
void ClearQueue(Queue *pq){
    pq->front = 0;
    pq ->rear = -1;
    pq -> size = 0;
}
void TraverseQueue(Queue *pq,void (*pf) (QueueEntry)){
    int pos ,s;
    for(pos =pq->front,s=0;s<pq->size;s++){
        (*pf)(pq->entry[pos]);
        pos =(pos+1)%MAX_QUEUE;
    }
}

