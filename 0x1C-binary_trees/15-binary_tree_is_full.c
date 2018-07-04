#include "binary_trees.h"

/**
 * binary_tree_one_child - measures the nodes with only 1 child
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: number of one_child's of the tree.
 */
size_t binary_tree_one_child(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_one_child(tree->right) +
			binary_tree_one_child(tree->left));
	return (1 + binary_tree_one_child(tree->right) +
		binary_tree_one_child(tree->left));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if its full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_one_child(tree) != 0)
		return (0);
	return (1);
}
