#include "binary_trees.h"
/**
 * binary_tree_node - inserts a binary tree node
 * @parent: the parent node
 * @value: the value of the nodei
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;

	return (new_node);
}
