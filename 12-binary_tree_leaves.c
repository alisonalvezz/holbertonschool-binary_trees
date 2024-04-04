#include "binary_trees.h"

/**
 * binary_tree_leaves - countes the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null, else the count of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		counter++;

		counter += binary_tree_leaves(tree->right);

		counter += binary_tree_leaves(tree->left);
	}

	return (counter);
}
