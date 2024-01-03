#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int tree_leafs = 0;

	if (node && !(node->left) && !(node->right))
		tree_leafs = 1;
	return (tree_leafs);
}

/**
 * binary_tree_is_parent_full - checks if node is parent
 * @node: pointer to the node to check
 * Return: 1 if node is a parent, else 0
 */
int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int tree_pparent = 0;

	if (node && node->left && node->right)
		tree_pparent = 1;
	return (tree_pparent);
}

/**
 * height - find height of a binary tree
 * @tree: Pointer to the root node
 * Return: If tree is NULL return 0 else Height
 */
int height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree)
	{
		left_height  = tree->left ? height(tree->left) + 1 : 0;
		right_height = tree->right ? height(tree->right) + 1 : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - finds if binary tree is perfect
 * @tree: Pointer to the root node
 * Return: If tree is perfect return 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);
		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);
		if (binary_tree_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}
	return (0);
}
