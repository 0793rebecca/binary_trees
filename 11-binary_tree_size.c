#include "binary_trees.h"

/**
  * binary_tree_size - function that measures the binary tree size
  * @tree: pointer that points to the root node
  * of the tree to be measured
  * Return: the tree size,
  * Else 0 if tree is NULL
  */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}