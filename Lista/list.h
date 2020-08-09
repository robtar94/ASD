#ifndef LIST_H
#define LIST_H
typedef struct node
{
int key;
struct node * prev;
struct node * next;

}Node;

typedef struct list
{
    Node * head;
    Node * tail;

}List;

void init(List *L);
void insert(List *L, int k);
void list_search(List L, int k);
void write(List L);
void insert_after (List * L, int k, int pos);
void insert_before (List * L, int k, int pos);
void delete (List *L, int k);
void clear (List  *L);




#endif // LIST_H
