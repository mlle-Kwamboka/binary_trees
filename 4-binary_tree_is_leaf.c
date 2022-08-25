#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 *
 * Return: 1 if node is a leaf
 *         0 if not a leaf
 *         0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
    return (0);
  else if (node->right = NULL)
    return (1);
  else if (node->left = NULL)
    return (1);
  else
    return (0);
}
