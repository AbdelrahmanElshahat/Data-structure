//
// Created by Elshahat on 11/13/2020.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#define MAX_QUEUE 100
typedef int  QueueEntry;
typedef struct queue{
    int front;
    int rear;
    int size;
    QueueEntry entry[MAX_QUEUE];
}Queue;
void CreateQueue(Queue *pq);
void Append(QueueEntry e,Queue *pq);
void Serve (QueueEntry *pe,Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq,void (*pf) (QueueEntry));
#endif //QUEUE_QUEUE_H
