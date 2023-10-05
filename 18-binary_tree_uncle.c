#include "binary_trees.h"

/**
  * binary_tree_uncle - function that finds the uncle of a node
  * @node: a pointer to the node to find the uncle
  * Return: pointer to the uncle else, NULL if node is NULL,
  * parent is NULL, no uncle exists
  */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
			|| node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}