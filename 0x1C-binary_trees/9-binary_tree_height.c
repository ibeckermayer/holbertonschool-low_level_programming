#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight, lheight;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	rheight = 1 + binary_tree_height(tree->right);
	lheight = 1 + binary_tree_height(tree->left);
	return (rheight > lheight ? rheight : lheight);
}
