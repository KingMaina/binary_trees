#include "binary_trees.h"


/**
 * binary_tree_node: A node of a binary tree
 * @parent: Pointer to the parent node of a node
 * @value: The value stored in a node
 *
 * Returns: Pointer to the created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = NULL;

    node = malloc(sizeof(*node));
    if (node == NULL)
    {
        perror("malloc");
        exit(EXIT_FAILURE);
    }
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    node->n = value;
    return (node);
}
