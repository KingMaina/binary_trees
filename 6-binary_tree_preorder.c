#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree using pre-order method.
 * @tree: pointer to root node.
 * @func: function to call on a tree node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
