#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: the tree size to be measured
 *
 * Return: the size of a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, x = 0, y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		y = binary_tree_size(tree->left);
		x = binary_tree_size(tree->right);
		size = x + l + 1;
	}
	return (size);
}
