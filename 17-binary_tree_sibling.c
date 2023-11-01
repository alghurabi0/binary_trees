#include "binary_trees.h"
/**
 * binary_tree_sibling - find a sibiling node
 * @node: node to check
 * Return: pointer to sibiling or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	else if (node->parent->left == node && node->parent->right == NULL)
		return (NULL);
	else if (node->parent->right == node && node->parent->left == NULL)
		return (NULL);
	else if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	else if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
