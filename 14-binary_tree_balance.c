#include "binary_trees.h"

/**
  * binary_tree_height - function that computes the
  * height of a binary tree
  * @tree: pointer to the root node of the tree
  * Return: tree height else, 0 if tree is NULL
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (1 + (height_left > height_right ? height_left : height_right));
}

/**
  * binary_tree_balance - function that measures the
  * balance factor of a binary tree
  * @tree:  a pointer to the root node of
  * the tree to measure the balance factor
  * Return: balance factor thus,
  * the difference between left and right subtree heights
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) -
			(int)binary_tree_height(tree->right));
}
