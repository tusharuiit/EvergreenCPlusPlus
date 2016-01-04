#include "list.h"

#include <iostream>

int main()
{
	List* head = 0;

	push_front(&head, 1);
	push_front(&head, 2);
	push_front(&head, 3);
	push_front(&head, 4);

	output(head);

	push_back(&head, 0);

	output(head);

	List* element = pop_front(&head);

	std::cout << "Popped element " << element->value << std::endl;

	output(head);


	element = pop_back(head);

	std::cout << "popped back " << element->value << std::endl;

	output(head);
}
