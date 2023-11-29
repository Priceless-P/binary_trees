#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts the right node
 * @parent: the parent node
 * @value: the value of the node
 * Return: the va;lue node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_new_node;

	if (parent == NULL)
		return (NULL);
	right_new_node = malloc(sizeof(binary_tree_t));
	if (right_new_node == NULL)
		return (NULL);
	right_new_node->n = value;
	right_new_node->parent = parent;
	if (parent->right != NULL)
	{
		right_new_node->right = parent->right;
		right_new_node->right->parent = right_new_node;
	}
	parent->right = right_new_node;
	return (right_new_node);
}
