#include "binary_trees.h"
<<<<<<< HEAD
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
=======

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

>>>>>>> db8d609d106566d777bf3b83387f4d20addbf9a2
}
