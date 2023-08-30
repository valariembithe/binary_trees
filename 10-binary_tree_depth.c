#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 * Return: The depth of the node, or 0 if node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((tree->parent != NULL) ?
		binary_tree_depth(tree->parent) + 1 : 0);
}
