#pragma once

#include <memory>

struct Node
{
	int key = 0;

	std::shared_ptr<Node> left;
	std::shared_ptr<Node> right;
};