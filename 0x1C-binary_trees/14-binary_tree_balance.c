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

/**
 * binary_tree_balance - measures the balance of the tree.
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: balance of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *no_l, *no_r;
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);
	no_l = binary_tree_node(NULL, tree->n);
	no_l->left = NULL;
	no_l->right = tree->right;
	no_r = binary_tree_node(NULL, tree->n);
	no_r->left = tree->left;
	no_r->right = NULL;
	height_l = binary_tree_height(no_r);
	height_r = binary_tree_height(no_l);
	/* free(no_r); */
	/* free(no_l); */
	return (height_l - height_r);
}
