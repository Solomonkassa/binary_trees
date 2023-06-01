#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST)
 * @tree: Double pointer to the root node of the BST
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			return (bst_insert(&((*tree)->left), value));
		}
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			return (bst_insert(&((*tree)->right), value));
		}
	}

	return (NULL);
}

