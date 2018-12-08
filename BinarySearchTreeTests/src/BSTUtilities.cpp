#include "BSTUtilities.h"

bool BSTUtilities::isSymmetric(std::shared_ptr<Node> _left, std::shared_ptr<Node> _right)
{
	// if the left and right are both empty return 
	if (_left == nullptr && _right == nullptr)
		return true;

	return	(_left != nullptr && _right != nullptr) &&
			isSymmetric(_left->left, _right->right) &&
			isSymmetric(_left->right, _right->left);
}
