#ifndef LIST_H
#define LIST_H
struct node;

typedef
struct node
{
	int key;
	struct node *p;
	struct node *left;
	struct node *right;
}Node;

typedef
struct tree
{
	Node *root;
}Tree;

void init(Tree *T);
void make_tree (Tree *T, int key);
void insert (Tree *T, int key);
	

#endif

