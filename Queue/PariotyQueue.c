//
// Created by abdel on 1/13/2021.
//

#include "PariotyQueue.h"

void init_queue(priorityqueue* ppq){
    for (int i = 0; i < PRIORITIES ; ++i) {
        CreateQueue(&ppq->priority_queue[i]);
    }
}
void append_pq(priorityqueue *ppq,QueueEntry e,int p){
    Append(e, &ppq->priority_queue[p]);
}
void serve_pq(priorityqueue*ppq,QueueEntry e){
    for (int i = 0; i < PRIORITIES; ++i) {
        Serve(&e,&ppq->priority_queue[i]);
    }
}