#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a new node at the left child of parent
 * parent: the parent node to insert the new left child node
 * value: value of the new node
 * Return: pointer to new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return NULL;

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;

	if (newNode->left != NULL)
		newNode->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
