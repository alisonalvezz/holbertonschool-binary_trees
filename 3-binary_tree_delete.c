#include "binary_trees.h"
#include <stdlib.h>

/**
*binary_tree_delete - eliminar un arbol
*@tree: arbol a borrar
*
*Return: void, solo elimina el arbol
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
