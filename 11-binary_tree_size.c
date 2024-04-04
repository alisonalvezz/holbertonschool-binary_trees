#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a tree
 *@tree: pointer to the root node of the tree
 *Return: 0 if null, else the measure of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree != NULL)
	{
		counter++;

		counter += binary_tree_size(tree->left);

		counter += binary_tree_size(tree->right);
	}

	return (counter);
}
