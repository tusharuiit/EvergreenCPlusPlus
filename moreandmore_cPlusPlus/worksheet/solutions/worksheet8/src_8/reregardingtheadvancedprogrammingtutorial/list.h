#ifndef LIST_H
#define LIST_H


struct List {
	int value;
	List* next;
};


void push_front(List** listHead, int v);

List* pop_front(List** listHead);

void push_back(List** listHead, int v);

List* pop_back(List* listHead);

void output(List* listHead);






#endif //  LIST_H
