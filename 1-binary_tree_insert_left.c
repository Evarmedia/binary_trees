#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts left-child node
 * @parent: Pointer to node where insert left-child
 * @value: Value to put in the new node
 * Return: Pointer to the new node else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *neww_lft_node = NULL;

	if (parent == NULL)
		return (NULL);

	neww_lft_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		neww_lft_node->left = parent->left;
		parent->left->parent = neww_lft_node;
	}
	parent->left = neww_lft_node;

	return (neww_lft_node);
}
