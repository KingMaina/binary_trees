#include "binary_trees.h"


/**
 * binary_tree_insert_left - Inserts a node to the left of a parent node
 * @parent: Pointer to the parent node of the binary tree
 * @value: The value stored in the created node
 *
 * Return: Pointer to the created node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}

