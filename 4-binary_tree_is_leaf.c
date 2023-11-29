#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 * @node: the node to be checked
 * Return: 1 if true, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
