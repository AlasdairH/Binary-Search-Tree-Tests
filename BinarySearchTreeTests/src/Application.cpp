#include <iostream>

#include "Node.h"
#include "BSTUtilities.h"

using NodePtr = std::shared_ptr<Node>;

int main()
{
	NodePtr root = std::make_shared<Node>();

	root->left = std::make_shared<Node>();
	root->right = std::make_shared<Node>();

	root->left->left = std::make_shared<Node>();
	root->right->left = std::make_shared<Node>();

	if (BSTUtilities::isSymmetric(root->left, root->right))
	{
		std::cout << "Is Symmetric\n";
	}
	else
	{
		std::cout << "Is Not Symmetric\n";
	}
	
	system("PAUSE");
	return 0;
}