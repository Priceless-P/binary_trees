#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree
* Return: 1 if perfect, and 0 not perfect or if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{

		return ((binary_tree_is_full(tree) &&
		(int)binary_tree_nodes(tree) ==
		((int)(pow(2, binary_tree_height(tree))) - 1)));
	}
		return (0);
}

/**
* binary_tree_is_full - Checks if a binary tree is full
* @tree: Pointer to the root node of the tree
* Return: 1 if full, and 0 not full or if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: Pointer to the root node of the tree
* Return: Number of nodes or 0 if tree is NULL
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
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

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((left_height > right_height ? left_height : right_height));
}
else
{
	return (0);
}
}
