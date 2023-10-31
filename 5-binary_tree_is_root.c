#include "binary_trees.h"
/**
 * binary-tree-is-root - hello world
 * @node: heeey
 * Return: 1 if root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (0);
	return (1);
}
