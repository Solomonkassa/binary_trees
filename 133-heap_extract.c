#include "binary_trees.h"

/**
 * heapify_down - Restores the Max Heap property by moving a node down the tree
 * @root: Double pointer to the root node of the heap
 */
void heapify_down(heap_t **root)
{
	heap_t *node = *root;
	heap_t *child;

	while (node->left)
	{
		child = node->left;
		if (node->right && node->right->n > child->n)
			child = node->right;

		if (child->n > node->n)
		{
			int temp = child->n;

			child->n = node->n;
			node->n = temp;
			node = child;
		}
		else
		{
			break;
		}
	}
}

/**
 * get_last_node - Finds and returns the last level-order node in the heap
 * @root: Pointer to the root node of the heap
 *
 * Return: Pointer to the last level-order node, or NULL if heap is empty
 */
heap_t *get_last_node(heap_t *root)
{
	if (!root)
		return (NULL);

	while (root->left || root->right)
	{
		if (root->right)
			root = root->right;
		else
			root = root->left;
	}

	return (root);
}

/**
 * heap_extract - Extracts the root node of a Max Binary Heap
 * @root: Double pointer to the root node of the heap
 *
 * Return: Value stored in the root node, or 0 on failure
 */
int heap_extract(heap_t **root)
{
	int value;
	heap_t *last_node, *parent;

	if (!root || !*root)
		return (0);

	value = (*root)->n;
	last_node = get_last_node(*root);

	if (last_node == *root)
	{
		free(*root);
		*root = NULL;
		return (value);
	}

	parent = last_node->parent;
	if (parent->left == last_node)
		parent->left = NULL;
	else
		parent->right = NULL;

	last_node->parent = NULL;
	last_node->left = (*root)->left;
	last_node->right = (*root)->right;
	if ((*root)->left)
		(*root)->left->parent = last_node;
	if ((*root)->right)
		(*root)->right->parent = last_node;

	last_node->n = (*root)->n;
	free(*root);
	*root = last_node;

	heapify_down(root);

	return (value);
}

