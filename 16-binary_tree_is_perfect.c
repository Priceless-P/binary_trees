#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: Pointer to the root node of the tree
* Return: 1 if perfect, and 0 not perfect or if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full, expected_nodes, has_correct_node_count;

	size_t height, node_count;

	if (tree == NULL)
	{
		is_full = binary_tree_is_full(tree);
		height = binary_tree_height(tree);
		node_count = binary_tree_nodes(tree);
		expected_nodes = (int)(pow(2, height)) - 1;
		has_correct_node_count = (node_count == expected_nodes);

		return (is_full && has_correct_node_count);
	}
		return (0);
}
