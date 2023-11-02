#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect.
 * @tree: A pointer to the root of the tree.
 *
 * Return: 1 if perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node.
 * Return: 1 if tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a
 * binary tree.
 * @tree: Pointer to root node.
 * Return: The balance factor of the tree otherwise 0.
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
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, otherwise 0 on failure or NULL.
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
