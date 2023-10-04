#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	const binary_tree_t *current = tree;

	if (tree == NULL)
	{
		return (0);
	}

	depth = 0;

	while (current->parent == NULL)
	{
		depth++;
		current = current->parent;
		{
			return (depth);
		}
