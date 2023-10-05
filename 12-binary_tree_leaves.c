#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 * Return: Number of leaves in the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

<<<<<<< HEAD
	if (tree->left == NULL && tree->right == 1)
=======
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
<<<<<<< HEAD
=======
=======
>>>>>>> 9926ba379edc2636a82546a31af7bc157efb7586
=======
>>>>>>> 7da5fa3b077a5cb7fe9975ec871079a91ed5825d
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
>>>>>>> cf1fed44c7bfb1ded5989a662aad4d8771e4681b
>>>>>>> b1743d16393d2c49ce27d28f8d856eb86b5440eb
}
