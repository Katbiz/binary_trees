#include "binary_trees.h"

/**
 * binary_tree_postorder - The function that goes through a binary tree using,
 * post-order traversal.
 * @tree: the pointer to the root node of the tree to traverse.
 * @func: The pointer to a function to call for each node.
 *
 * If tree or func is NULL, do nothing.
 *
 * Return: no return.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
