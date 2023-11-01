#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to check
 * Return: pointer to uncle or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);

	if (node->parent->parent->right == node->parent)
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);
	return (NULL);
}
