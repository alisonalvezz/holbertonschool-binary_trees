#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the root node
 * Return: if tree null 0, else the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		int count_left = 0;

		int count_right = 0;

		if (tree->left)
			count_left = 1 + binary_tree_height(tree->left);

		if (tree->right)
			count_right = 1 + binary_tree_height(tree->right);

		if (count_left < count_right)
			return (count_right);
		else
			return (count_left);
	}

	return (0);
}
