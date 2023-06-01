#include "binary_trees.h"

/**
 * print_level - Prints nodes at a given level of the binary tree
 * @tree: Pointer to the root node of the tree
 * @level: Current level to print nodes
 * @func: Pointer to a function to call for each node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - Performs level-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: The value in each node is passed as a parameter to the function
 * If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level;
	int height;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);

	for (level = 1; level <= height + 1; level++)
		print_level(tree, level, func);
}


/**
 * binary_tree_height - Calculates the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
