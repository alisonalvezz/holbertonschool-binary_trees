#include "binary_trees.h"

/**
*binary_tree_nodes - counts the nodes
*@tree: pointer to the root of the tree;
*
*Return: void;
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
			counter++;

		counter += binary_tree_nodes(tree->left);
		counter += binary_tree_nodes(tree->right);
	}

	return (counter);
}
