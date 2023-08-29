#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_node = NULL;

	if (parent == NULL)
		return (NULL);
	r_node = binary_tree_node(parent, value);
	if (r_node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = r_node;
	}
	else
	{
		r_node->right = parent->right;
		parent->right = r_node;
		r_node->right->parent = r_node;
	}
	return (r_node);
}
