#include "binary_trees.h"

/**
<<<<<<< HEAD
  * binary_tree_leaves - function that counts the leaves in a binary tree
  * @tree: pointer to the root node of the tree to count the leaves
  * Return: Number of leaves in the binary tree
  */

=======
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * Return: The number of leaves counted
 */
>>>>>>> 9926ba379edc2636a82546a31af7bc157efb7586
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
<<<<<<< HEAD
<<<<<<< HEAD
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
=======
>>>>>>> 9926ba379edc2636a82546a31af7bc157efb7586
=======
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
>>>>>>> cf1fed44c7bfb1ded5989a662aad4d8771e4681b
}
