//
// Created by abdelrahmanelshahat on 22/12/2021.
//
//#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef LINKED_QUEUE_QUEUE_H_H
#define LINKED_QUEUE_QUEUE_H_H
typedef int QueueEntery;
typedef struct queuenode{
    QueueEntery entery;
    struct queuenode *next;
}Queuenode;
typedef struct queue{
    Queuenode *front;
    Queuenode *rear;
    int size;
}Queue;
void Create_Queue(Queue *pq);
void Append(QueueEntery e,Queue *pq);
void Serve(QueueEntery *pe,Queue*pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq,void(*pf)(QueueEntery));
#endif //LINKED_QUEUE_QUEUE_H_H
