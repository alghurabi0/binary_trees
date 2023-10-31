#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node of the created node
 * @value: value to go inside the created noe
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));;

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;

	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
