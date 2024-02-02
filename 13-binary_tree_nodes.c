#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts
 * the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  test_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		test_node += ((tree->left || tree->right) ? 1 : 0);
		test_node += binary_tree_nodes(tree->left);
		test_node += binary_tree_nodes(tree->right);
		return (test_node);
	}
}
