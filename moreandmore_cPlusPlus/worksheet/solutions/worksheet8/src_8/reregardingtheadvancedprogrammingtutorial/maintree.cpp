#include "tree.h"

#include <iostream>



int main()
{
	nodeptr root;
	root = 0;

	tuple t;
	t.key = 5;
	t.value = "node 5";

	insert(t, root);


	t.key = 6;
	t.value = "node 6";
	insert(t, root);

	t.key = 8;
	t.value = "node 8";
	insert(t, root);


	inorder(root);


	std::cout << "\n Search node : 5\n ";
	if (root != 0)
		find( 5, root);


	return 0;
}
