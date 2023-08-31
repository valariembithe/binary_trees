#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @node: A pointer to the node to measure the depth.
 * Return: The depth of the node, or 0 if node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (tree == NULL)
		return (0);

	return ((tree->parent != NULL) ?
		binary_tree_depth(tree->parent) + 1 : 0);
}

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 * Return: A pointer to the lowest common ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first, *temp2 = second;

	if (first == NULL || second == NULL)
		return NULL;

	while (temp1 != NULL)
	{
		temp2 = second;
		while (temp2 != NULL)
		{
			if (temp1 == temp2)
				return (binary_tree_t *)temp1;
			temp2 = temp2->parent;
		}
		temp1 = temp1->parent;
	}

	return NULL;
}
