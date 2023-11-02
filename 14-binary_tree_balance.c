#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a
 * binary tree.
 * @tree: Pointer to root node.
 *
 * Return: The balance factor of the tree, Otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_tree_height = 0, right_tree_height = 0;

	if (!tree)
		return (0);

	left_tree_height = binary_tree_height(tree->left);
	right_tree_height = binary_tree_height(tree->right);
	return (left_tree_height - right_tree_height);
}

/**
 * binary_tree_height - Gets the height of a binary tree
 * @tree: root node to draw height from for tree
 *
 * Return: Height of the tree, 0 on failure or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_tree_size = 0;
	size_t right_tree_size = 0;

	if (!tree)
		return (0);

	left_tree_size += 1 + binary_tree_height(tree->left);
	right_tree_size += 1 + binary_tree_height(tree->right);
	if (left_tree_size > right_tree_size)
		return (left_tree_size);

	return (right_tree_size);
}
