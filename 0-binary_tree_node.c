#include "binary_trees.h"

/**
 * binary_tree_node - fnc to create binary tree node
 * @parent: the pointer to  parent node of node to create
 * @value: the Value to put in new node
 * Return: ponter to new node || NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *neww_node;

	neww_node = malloc(sizeof(binary_tree_t));
	if (neww_node == NULL)
		return (NULL);

	neww_node->parent = parent;
	neww_node->n = value;
	neww_node->left = NULL;
	neww_node->right = NULL;

	return (neww_node);
}
