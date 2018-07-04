#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: nodes of the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
}
