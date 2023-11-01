#include "binary_trees.h"
/**
 * binary_tree_is_root - hello world
 * @node: heeey
 * Return: 1 if root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->parent == NULL);
}
