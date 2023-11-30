#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node
* @node: Pointer to the root node of the tree
* Return: Sibling node or NULL if:
*   - node is NULL
*   - or the parent is NULL
*   - node has no sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);
	else if (parent->right == node)
		return (parent->left);

	return (NULL);
}
