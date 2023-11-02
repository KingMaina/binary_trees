#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node to the left of a parent node
 * @parent: A pointer to the parent node
 * @value: The value stored in the created node
 *
 * Return: a pointer to the new node,
 * Otherwise NULL If parent is NULL or an error occurs.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
