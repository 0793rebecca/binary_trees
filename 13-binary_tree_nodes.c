#include "binary_trees.h"

/**
  * binary_tree_nodes - function that counts the nodes
  * with one child at least in a binary tree
  * @tree: the pointer to the root node of the tree
  * to count the nodes
  * Return: number of node with one child at least
  * in the binary tree else, 0 if tree is NULL
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
