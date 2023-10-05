#include "binary_trees.h"

/**
  * binary_tree_height - function that computes
  * the height of a binary tree
  * @tree: pointer to the root noode of the tree
  * Return: the tree's height else, 0 if NULL
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
  * binary_tree_is_perfect - function that checks
  * if a binary tree is perfect
  * @tree: a pointer to the root node of the tree to check
  * Return: 1 if tree is perfect
  * else, 0 if tree is NULL
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left == height_right)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0);
}
