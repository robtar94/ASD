#ifndef STACK_H
#define STACK_H
typedef struct stack
{
    int data[10];
    int top;
}
Stack;
void init(Stack *S);
int push(Stack *S, int k);
void write(Stack S);
int stack_empty(Stack S);
int pop(Stack *S);
void write_empty(int x);
void write_pop(int p);






#endif
