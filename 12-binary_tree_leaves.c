#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves in your tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, x = 0, y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		x = binary_tree_leaves(tree->left);
		y = binary_tree_leaves(tree->right);
		leaf = x + y;
		return ((!x && !y) ? leaf + 1 : leaf + 0);
}
