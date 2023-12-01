#include "binary_trees.h"

/**
* compare_tree_depth - Compares tree depth
* @tree: Pointer to the root node of the tree
* Return:  size, or 0 if tree is NULL
*/

int compare_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{

		return (compare_tree_depth(tree->left) + 1
		+ compare_tree_depth(tree->right));
	}
		return (0);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree
* Return: 1 if perfect, and 0 not perfect or if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);

	if (tree && (tree->left == NULL && tree->right == NULL))
		return (1);

	left_tree = compare_tree_depth(tree->left);
	right_tree = compare_tree_depth(tree->right);

	if ((left_tree - right_tree) == 0)
		return (1);
	return (0);
}
