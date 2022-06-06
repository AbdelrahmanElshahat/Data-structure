//
// Created by abdel on 1/13/2021.
//

#ifndef MAIN_C_PARIOTYQUEUE_H
#define MAIN_C_PARIOTYQUEUE_H
#define PRIORITIES 2
#include "queue.h"

typedef struct PriorityQueue{

    Queue priority_queue [PRIORITIES];
}priorityqueue;
void init_queue(priorityqueue*);
void append_pq(priorityqueue*,QueueEntry e,int p);
void serve_pq(priorityqueue*,QueueEntry e);
#endif //MAIN_C_PARIOTYQUEUE_H
