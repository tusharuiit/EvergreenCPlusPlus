#include "list.h"

#include <iostream>

void push_front(List** listHead, int v) 
{
	std::cout << "push front" << std::endl;


	List* element = new List;

	element->value = v;
	element->next = *listHead;

	*listHead = element;
}

List* pop_front(List** listHead)
{
	std::cout << "pop front" << std::endl;

	List* popElement = *listHead;

	if (*listHead != 0)
		*listHead = (*listHead)->next;

	return popElement;
}

void push_back(List** listHead, int v)
{
	std::cout << "push back" << std::endl;


	List* element = new List;

	element->value = v;
	element->next = 0;

	if (*listHead != 0)
	{
		List* lastElement = *listHead;
		while(lastElement->next != 0)
			lastElement = lastElement->next;
		lastElement->next = element;
	}
	else
	{
		*listHead = element;
	}
}

List* pop_back(List* listHead)
{
	std::cout << "pop back" << std::endl;


	if (listHead == 0)
		return listHead;
	else if (listHead->next == 0)
		return listHead;
	else
	{
		List* currentElement = listHead;

		while (currentElement->next->next != 0)
			currentElement = currentElement->next;

		List* returnElem = currentElement->next;

		currentElement->next = 0;

		return returnElem;
	}
}	

void output(List* listHead)
{
	List* currentElement = listHead;

	while (currentElement != 0)
	{
		std::cout << currentElement->value << std::endl;
		currentElement = currentElement->next;
	}
}

