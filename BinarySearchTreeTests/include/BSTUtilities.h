#pragma once

#include "Node.h"

class BSTUtilities
{
public:
	// recursive
	static bool isSymmetric(std::shared_ptr<Node> _left, std::shared_ptr<Node> _right);
};