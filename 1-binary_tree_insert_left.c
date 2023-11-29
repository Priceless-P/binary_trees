#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts the left node
 * @parent: the parent node
 * @value: the value of the node
 * Return: the va;lue node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_new_node;

	if (parent == NULL)
		return (NULL);
	left_new_node = malloc(sizeof(binary_tree_t));
	if (left_new_node == NULL)
		return (NULL);
	left_new_node->n = value;
	left_new_node->parent = parent;
	left_new_node->right = NULL;
	left_new_node->left = NULL;
	if (parent->left != NULL)
	{
		left_new_node->left = parent->left;
		left_new_node->left->parent = left_new_node;
	}
	parent->left = left_new_node;
	return (left_new_node);
}
