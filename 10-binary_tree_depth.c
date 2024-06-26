#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The depth of the node, or 0 if the node is NULL or the root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current = tree;

	while (current && current->parent)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
