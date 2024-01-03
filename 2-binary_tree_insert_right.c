#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts right-child  node
 * @parent: Pointer to the node to insert right-child
 * @value: Value to put in the new node
 * Return: Pointer to the new node otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *neww_ryt_node = NULL;

	if (parent == NULL)
		return (NULL);

	neww_ryt_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		neww_ryt_node->right = parent->right;
		parent->right->parent = neww_ryt_node;
	}
	parent->right = neww_ryt_node;

	return (neww_ryt_node);
}
