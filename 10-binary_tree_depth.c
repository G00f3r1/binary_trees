#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of
 * a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}
