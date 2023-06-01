#include "binary_trees.h"

<<<<<<< HEAD
/**
 * avl_insert_node - Recursive function to insert a node into an AVL tree
 * @tree: Double pointer to the root node of the AVL tree
 * @parent: Pointer to the parent node
 * @new_node: Double pointer to the new node to be inserted
 * @value: Value to be inserted
 *
 * Return: Pointer to the inserted node, or NULL on failure
 */
avl_t *avl_insert_node(avl_t **tree, avl_t *parent, avl_t **new_node,
		int value)
{
	int balance;

	if (*tree == NULL)
		return (*new_node = binary_tree_node(parent, value));

	if ((*tree)->n > value)
	{
		(*tree)->left = avl_insert_node(&(*tree)->left, *tree, new_node, value);
=======
size_t height(const binary_tree_t *tree);
int balance(const binary_tree_t *tree);
avl_t *avl_insert_recursive(avl_t **tree, avl_t *parent,
		avl_t **new, int value);
avl_t *avl_insert(avl_t **tree, int value);

/**
 * height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int balance(const binary_tree_t *tree)
{
	return (tree != NULL ? height(tree->left) - height(tree->right) : 0);
}

/**
 * avl_insert_recursive - Inserts a value into an AVL tree recursively.
 * @tree: A double pointer to the root node of the AVL tree to insert into.
 * @parent: The parent node of the current working node.
 * @new: A double pointer to store the new node.
 * @value: The value to insert into the AVL tree.
 *
 * Return: A pointer to the new root after insertion, or NULL on failure.
 */
avl_t *avl_insert_recursive(avl_t **tree, avl_t *parent,
		avl_t **new, int value)
{
	int bfactor;

	if (*tree == NULL)
		return (*new = binary_tree_node(parent, value));

	if ((*tree)->n > value)
	{
		(*tree)->left = avl_insert_recursive(&(*tree)->left, *tree, new, value);
>>>>>>> a0a49de6d9f6d6f64bd2c1482c0461079b6b1974
		if ((*tree)->left == NULL)
			return (NULL);
	}
	else if ((*tree)->n < value)
	{
<<<<<<< HEAD
		(*tree)->right = avl_insert_node(&(*tree)->right, *tree, new_node, value);
=======
		(*tree)->right = avl_insert_recursive(&(*tree)->right, *tree, new, value);
>>>>>>> a0a49de6d9f6d6f64bd2c1482c0461079b6b1974
		if ((*tree)->right == NULL)
			return (NULL);
	}
	else
		return (*tree);

<<<<<<< HEAD
	balance = binary_tree_balance(*tree);

	if (balance > 1 && (*tree)->left->n > value)
		*tree = binary_tree_rotate_right(*tree);
	else if (balance > 1 && (*tree)->left->n < value)
=======
	bfactor = balance(*tree);
	if (bfactor > 1 && (*tree)->left->n > value)
		*tree = binary_tree_rotate_right(*tree);
	else if (bfactor < -1 && (*tree)->right->n < value)
		*tree = binary_tree_rotate_left(*tree);
	else if (bfactor > 1 && (*tree)->left->n < value)
>>>>>>> a0a49de6d9f6d6f64bd2c1482c0461079b6b1974
	{
		(*tree)->left = binary_tree_rotate_left((*tree)->left);
		*tree = binary_tree_rotate_right(*tree);
	}
<<<<<<< HEAD
	else if (balance < -1 && (*tree)->right->n < value)
		*tree = binary_tree_rotate_left(*tree);
	else if (balance < -1 && (*tree)->right->n > value)
=======
	else if (bfactor < -1 && (*tree)->right->n > value)
>>>>>>> a0a49de6d9f6d6f64bd2c1482c0461079b6b1974
	{
		(*tree)->right = binary_tree_rotate_right((*tree)->right);
		*tree = binary_tree_rotate_left(*tree);
	}

	return (*tree);
}

/**
<<<<<<< HEAD
 * avl_insert - Inserts a value into an AVL tree
 * @tree: Double pointer to the root node of the AVL tree
 * @value: Value to be inserted
 *
 * Return: Pointer to the inserted node, or NULL on failure
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new_node = NULL;

=======
 * avl_insert - Inserts a value into an AVL tree.
 * @tree: A double pointer to the root node of the AVL tree to insert into.
 * @value: The value to insert into the AVL tree.
 *
 * Return: A pointer to the inserted node, or NULL on failure.
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new = NULL;

	if (tree == NULL)
		return (NULL);
>>>>>>> a0a49de6d9f6d6f64bd2c1482c0461079b6b1974
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
<<<<<<< HEAD

	avl_insert_node(tree, *tree, &new_node, value);

	return (new_node);
=======
	avl_insert_recursive(tree, *tree, &new, value);
	return (new);
>>>>>>> a0a49de6d9f6d6f64bd2c1482c0461079b6b1974
}
