#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree
* Return: 1 if perfect, and 0 not perfect or if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int is_full = binary_tree_is_full(tree);
	size_t height = binary_tree_height(tree);
	size_t node_count = binary_tree_nodes(tree);
	int expected_nodes = (int)(pow(2, height)) - 1;
	int has_correct_node_count = (node_count == expected_nodes);

	return (is_full && has_correct_node_count);
}
