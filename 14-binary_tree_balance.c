#include "binary_trees.h"

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 *
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int total = 0;

	if (tree == NULL)
		return (0);
	left_height = ((int)binary_tree_height(tree->left));
	right_height = ((int)binary_tree_height(tree->right));
	total = (left_height - right_height);
	return (total);
}

/**
 * binary_tree_height - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return ((left_height > right_height) ? left_height : right_height);
}
