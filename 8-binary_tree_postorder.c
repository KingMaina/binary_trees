#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a tree using post-order method
 * @tree: pointer to root node
 * @func: function to call on tree node
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
