#include "binary_trees.h"
/**
 * binary_tree_nodes - counts numer of nodes who are not leaves
 * @tree: root node
 * Return: number of nodes that are not leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
