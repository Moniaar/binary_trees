#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t m = 0;
	size_t n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			m = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			n = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((m > n) ? m : n);
	}
}

/**
 * binary_tree_balance - a function that measures the balance
 * factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance facto
 *
 * Return: 1 Upon success, If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
