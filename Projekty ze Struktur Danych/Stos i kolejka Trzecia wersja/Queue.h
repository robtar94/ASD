#ifndef QUEUE_H
#define QUEUE_H
typedef struct queue
{
    int data[10];
    int head;
    int tail;
    int length;

}
Queue;
void init_Q (Queue *Q);
int Queue_Empty(Queue Q);
void Enqueue( Queue*Q, int k);
int Dequeue(Queue *Q);
int write_Q(Queue Q);
void write_Q_Empty(int x);
void write_deq(int q);


#endif
