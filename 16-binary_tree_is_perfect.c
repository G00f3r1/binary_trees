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

	if (tree == NULL || (tree->left == NULL || tree->right == NULL))
	{
		return (0);
	}
	else
	{
		if (tree->left)
			left_h = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_h = 1 + binary_tree_height(tree->right);
		if (left_h > right_h)
			return (left_h);
		else
			return (right_h);
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	else if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
	return (0);
}
