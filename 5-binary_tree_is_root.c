#include "binary_trees.h"

/**
*binary_tree_is_root - verificar si es root
*@node: nodo a verificar;
*
*Return: 1 si es root y 0 si no lo es
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
