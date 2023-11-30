#include "binary_trees.h"

/**
* binary_tree_balance - Balance factor of a binary tree
* @tree: Pointer to the root node of the tree
* Return: Balance factor or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;

	int right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = (int)binary_tree_height(tree->left);
	right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}
