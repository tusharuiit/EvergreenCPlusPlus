#include <iostream>
#include <cctype>
#include <stdlib.h>
#include <string>


#include "tree.h"

int bsheight(nodeptr);

nodeptr srl(nodeptr &);
nodeptr drl(nodeptr &);
nodeptr srr(nodeptr &);
nodeptr drr(nodeptr &);

int max(int,int);


// Inserting a node
void insert(tuple x, nodeptr &p)
{
	if (p == 0)
	{
		p = new node;
		p->element = x;
		p->left  = 0;
		p->right = 0;
		p->height= 0;

		if (p == 0)
		{
			std::cout<<"Out of Space\n" << std::endl;
		}
	}
	else
	{
		if (x.key < p->element.key)
		{
			insert(x, p->left);
			if ((bsheight(p->left) - bsheight(p->right))==2)
			{
				if (x.key < p->left->element.key)
				{
					p = srl(p);
				}
				else
				{
					p = drl(p);
				}
			}
		}
		else if (x.key > p->element.key)
		{
			insert(x, p->right);
			if ((bsheight(p->right) - bsheight(p->left))==2)
			{
				if (x.key >  p->right->element.key)
				{
					p = srr(p);
				}
				else
				{
					p = drr(p);
				}
			}
		}
		else
		{
			std::cout<<"Element Exists\n" << std::endl;
		}
	}

	int m, n, d;
	m = bsheight(p->left);
	n = bsheight(p->right);
	d = max(m,n);
	p->height = d + 1;
}



// Finding an element
void find(int key, nodeptr &p)
{
	if (p == 0)
	{
		std::cout<<"Sorry! element not found\n" << std::endl;
	}
	else
	{
		if (key < p->element.key)
		{
			find(key, p->left);
		}
		else
		{
			if (key > p->element.key)
			{
				find(key, p->right);
			}
			else
			{
				std::cout << "Element found : (" << p->element.key << ", " << p->element.value << ")\n" << std::endl;
			}
		}
	}
}


void inorder(nodeptr p)
{
	if (p!=NULL)
	{
		inorder(p->left);
		std::cout <<  "(" << p->element.key << ", " << p->element.value << ")"<<"\t";
		inorder(p->right);
	}
	std::cout << std::endl;
}


int max(int value1, int value2)
{
	return ((value1 > value2) ? value1 : value2);
}



int bsheight(nodeptr p)
{
	int t;
	if (p == 0)
	{
		return -1;
	}
	else
	{
		t = p->height;
		return t;
	}
}


//right
nodeptr  srl(nodeptr &p1)
{
	nodeptr p2;
	p2 = p1->left;
	p1->left = p2->right;
	p2->right = p1;
	p1->height = max(bsheight(p1->left),bsheight(p1->right)) + 1;
	p2->height = max(bsheight(p2->left),p1->height) + 1;
	return p2;
}


//left
nodeptr  srr(nodeptr &p1)
{
	nodeptr p2;
	p2 = p1->right;
	p1->right = p2->left;
	p2->left = p1;
	p1->height = max(bsheight(p1->left),bsheight(p1->right)) + 1;
	p2->height = max(p1->height,bsheight(p2->right)) + 1;
	return p2;
}


nodeptr  drl(nodeptr &p1)
{
	p1->left=srr(p1->left);
	return srl(p1);
}


nodeptr drr(nodeptr &p1)
{
	p1->right = srl(p1->right);
	return srr(p1);
}


