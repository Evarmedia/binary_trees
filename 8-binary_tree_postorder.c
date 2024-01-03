#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal
 * @tree: pointer to root node
 * @func: pointer to call function for each node
 * The value in the node must be passed as a parameter to this function.
 * if tree or func is NULL do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
