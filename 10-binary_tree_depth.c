#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a tree
 * @tree: pointer to the node to measure the depth
 * Return: 0 if tree is null, else the depth of the node in question
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int count = 0;

		if (tree->parent != NULL)
			count = 1 + binary_tree_depth(tree->parent);

		return (count);
	}

	return (0);
}
