#include "binary_trees.h"

/**
*binary_tree_is_leaf - saber si un nodo es hoja
*@node: nodo a evaluar
*
*Return: 1 si es hoja y 0 si no lo es
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (node->left == NULL && node->right == NULL))
	{
		return (1);
	}

	return (0);
}

