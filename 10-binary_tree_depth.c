#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: node from which to measure backwards, starting at 0
* Return: levels from root, or 0 if `tree` is NULL
*/
size_t binary_tree_depth(const binary_tree_t *new_node)
{
	size_t tree = 0;
	if (new_node == NULL)
		return (tree);
	while (new_node->parent != NULL)
	{
		tree++;
		new_node = new_node->;
	}
	return (tree);
}
