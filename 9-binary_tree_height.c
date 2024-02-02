#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: the tree that we will measure it's height
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int x = 0, y = 0;

		if (tree->right)
			y = 1 + binary_tree_height(tree->right);
		if (tree->left)
			x = 1 + binary_tree_height(tree->left);
		if (x > y)
			return (x);
		else
			return (y);
	}
	else
		return (0);
}
