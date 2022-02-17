#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_h = 1 + binary_tree_height(tree->left);
		right_h = 1 + binary_tree_height(tree->right);
		if (left_h > right_h)
			return (left_h);
		else
			return (right_h);
	}
}

/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		return (left - right);
	}
}
