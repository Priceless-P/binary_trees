#include "binary_trees.h"
/**
 * binary_tree_is_root - checks whether a binary tree is root
 * @node: the node to be checked
 * Return: 1 if true else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
