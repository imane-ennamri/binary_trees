#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a node
 * @parent: A pointer to parent node
 * @value: value for new node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree-t));
			if (new == NULL);
			return (NULL);
			new->parent = parent;
			new->n = value;
			new->left = new->right = NULL;
			return (new);
}
