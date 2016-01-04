#ifndef TREE_H
#define TREE_H

#include <string>

struct tuple 
{
	int key;
	std::string value;
};


struct node
{
	tuple element;

	node *left;
	node *right;
	int height;
};

typedef struct node *nodeptr;


void insert(tuple, nodeptr &);
void find(int key, nodeptr &);

void inorder(nodeptr);

#endif // TREE_H
