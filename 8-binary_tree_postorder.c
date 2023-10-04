#include "binary_trees.h"

/** 
 * binary_tree_postorder - A binary tree using a postorder traversal
 * @tree: A pointer to thr root node of thr tree to traverse
 * @func: A pointer to a function to call eachother
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
