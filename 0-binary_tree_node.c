#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: the created binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *current = malloc(sizeof(binary_tree_t));

	if (current == NULL)
	{
		return (NULL);
	}
	current->parent = parent;
	current->n = value;
	current->left = NULL;
	current->right = NULL;

	return (current);
}
