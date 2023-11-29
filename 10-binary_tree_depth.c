#include "binary_trees.h"
/**
* binary_tree_depth - Measures the depth of a node in a binary tree
* @tree: Pointer to the node
* Return: depth of Node or 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree != NULL)
	{
		while (tree->parent != NULL)
		{
			depth++;
			tree = tree->parent;
		}
		return (depth);
	}
	else
	{
	return (0);
	}
}
