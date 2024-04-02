#include "binary_trees.h"

/**
 * binary_tree_node - creates a node in a binary tree
 * @parent: parent of the new node
 * @value: value of the new node
 * Return: null if it fails, else new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;

	return (new_node);
}
