#include "binary_trees.h"
/**
 * binary_tree_height - calculates the heidht of a binary tree
 * @tree: the tree to be counted
 * Return: the size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}
