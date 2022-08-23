#include "main.h"
/*
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to the parent node of node
 * @value: value in the new node
 *
 * Return: pointer to new node SUCCESS, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	
	if (!new)
		return(NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return(new);
}
