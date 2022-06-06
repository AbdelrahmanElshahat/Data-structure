//
// Created by abdelrahmanelshahat on 22/12/2021.
//

#include "queue.h"
void Create_Queue(Queue *pq){
    pq->front=NULL;
    pq->rear=NULL;
    pq->size = 0;
}
void Append(QueueEntery e,Queue *pq){
    Queuenode *pn=(Queuenode*)malloc(sizeof (Queuenode));
    pn->next = NULL;
    pn->entery=e;
    if(!(pq->rear)){
        pq->front = pn;
    } else{
        pq->rear->next=pn;
    }
    pq->rear=pn;
    pq->size++;
}
void Serve(QueueEntery *pe,Queue*pq){
    Queuenode *pn=pq->front;
    *pe=pn->entery;
    pq->front=pn->next;
    free(pn);
    if(!pq->front){
        pq->rear=NULL;
    }
    pq->size--;
}
int QueueEmpty(Queue *pq){
    return !pq->front;
}
int QueueFull(Queue *pq){
    return 0;
}
int QueueSize(Queue *pq){
    return pq->size;
}
void ClearQueue(Queue *pq){
    while (pq->front){
        pq->rear=pq->front->next;
        free(pq->front);
        pq->front=pq->rear;
    }
    pq->size=0;
}
void TraverseQueue(Queue *pq,void(*pf)(QueueEntery)){
    for(Queuenode*pn=pq->front;pn;pn=pn->next)
        (*pf)(pn->entery);
}