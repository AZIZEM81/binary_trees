#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverse a binary tree in post-order fashion
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to apply to each node's value
 *
 * Description: This function performs a post-order traversal of a binary tree
 *              and applies the provided function to each node's value.
 *              The traversal order is: left subtree,right subtree current node
 *              If either the tree or the function pointer is NULL, the fun
 *              returns without performing any operations.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
