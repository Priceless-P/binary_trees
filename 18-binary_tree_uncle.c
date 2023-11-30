#include "binary_trees.h"
/**
* binary_tree_uncle - Finds the uncle of a node
* @node: Pointer to the root node of the tree
* Return: Sibling node or NULL if:
*   - node is NULL
*   - or the parent is NULL
*   - node has no sibling
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL && node->parent->parent != NULL)
{

	binary_tree_t *g_parent = node->parent->parent;
	binary_tree_t *parent = node->parent;

	if (g_parent->left == parent)
	{
		if (g_parent->right != NULL)
			return (g_parent->right);
	}
	else if (g_parent->right == parent)
	{
		if (g_parent->left != NULL)
			return (g_parent->left);
	}
}
	return (NULL);
}
