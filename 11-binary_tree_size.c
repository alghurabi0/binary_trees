#include "binary_trees.h"
/**
 * binary_tree_size - count size of a tree
 * @tree: root node
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL && tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (1 + left + right);
}
