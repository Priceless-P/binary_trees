#include "binary_trees.h"

/**
* binary_tree_balance - Balance factor of a binary tree
* @tree: Pointer to the root node of the tree
* Return: Balance factor or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
{
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
return (0);
}


/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((left_height > right_height ? left_height : right_height));
}
	return (0);
}
