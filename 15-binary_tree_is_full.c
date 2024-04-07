#include "binary_trees.h"

/**
*binary_tree_is_full - checks if a binary tree is full
*@tree: pointer to the root node
*
*Return: retunr 1 this a tree perfect else 0;
*/

int binary_tree_is_full(const binary_tree_t *tree)
{

	/* if para saber si es null */
	if (tree == NULL)
		return (0);

	/* if para saber si el nodo es completo &&*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if ambos sean != NULL &&*/
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
