#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: If tree is NULL return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_s = 0;
	size_t right_s = 0;

	if (tree)
	{
		left_s = binary_tree_size(tree->left);
		right_s = binary_tree_size(tree->right);
		return (left_s + 1 + right_s);
	}
	else
	{
		return (0);
	}
}
