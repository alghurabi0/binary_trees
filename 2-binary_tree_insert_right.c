#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a new node at the left child of parent
 * parent: the parent node to insert the new left child node
 * value: value of the new node
 * Return: pointer to new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return NULL;

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = parent->right;
	newNode->left = NULL;

	if (newNode->right != NULL)
		newNode->right->parent = newNode;

	parent->right = newNode;

	return (newNode);
}
