# Binary Trees

This repository contains an implementation of binary trees in C programming languages. Binary trees are fundamental data structures that are widely used in computer science and have numerous applications. This README provides an advanced overview of binary trees, their properties, common operations, and some additional topics related to binary trees.

## Table of Contents

- [Introduction](#introduction)
- [Properties of Binary Trees](#properties-of-binary-trees)
  - [Binary Tree Structure](#binary-tree-structure)
  - [Binary Tree Terminology](#binary-tree-terminology)
- [Binary Tree Traversals](#binary-tree-traversals)
  - [In-order Traversal](#in-order-traversal)
  - [Pre-order Traversal](#pre-order-traversal)
  - [Post-order Traversal](#post-order-traversal)
  - [Level-order Traversal](#level-order-traversal)
- [Binary Search Trees](#binary-search-trees)
- [Balanced Binary Trees](#balanced-binary-trees)
  - [AVL Trees](#avl-trees)
  - [Red-Black Trees](#red-black-trees)
- [Binary Heap](#binary-heap)
- [Additional Topics](#additional-topics)
  - [Binary Tree Serialization and Deserialization](#binary-tree-serialization-and-deserialization)
  - [Binary Tree Path Sum](#binary-tree-path-sum)
  - [Lowest Common Ancestor in a Binary Tree](#lowest-common-ancestor-in-a-binary-tree)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. It is called a "binary" tree because each node can have a maximum of two children. The structure of a binary tree facilitates efficient searching, insertion, and deletion operations.

## Properties of Binary Trees

### Binary Tree Structure

In a binary tree, each node contains a value and a reference to its left child and right child (or null if the child does not exist). The topmost node of the tree is called the root, and it is the starting point for accessing the entire tree. The nodes below the root are referred to as internal nodes, while the nodes with no children are called leaf nodes.

```
       10
     /    \
    5      15
   /         \
  2           7
```

### Binary Tree Terminology

- **Depth**: The depth of a node is the number of edges from the root to that node.
- **Height**: The height of a node is the number of edges on the longest path from that node to a leaf.
- **Leaf**: A leaf is a node that does not have any children.
- **Parent**: For any given node, its parent is the node that is one level above it in the tree.
- **Sibling**: Siblings are nodes that share the same parent.
- **Ancestor**: An ancestor of a node is any node that lies on the path from the root to that node.
- **Descendant**: A descendant of a node is any node that can be reached by following paths downward from that node.

## Binary Tree Traversals

Traversal refers to visiting each node of a binary tree in a specific order. The following are the commonly used traversal techniques:

### In-order Traversal

In an in-order traversal, we visit the left subtree, then the root, and finally the right subtree. It visits the nodes in ascending order when applied to a binary search tree

### Pre-order Traversal

In a pre-order traversal, we visit the root, then the left subtree, and finally the right subtree.

### Post-order Traversal

In a post-order traversal, we visit the left subtree, then the right subtree, and finally the root.

### Level-order Traversal

Level-order traversal visits the nodes of the binary tree level by level, from left to right. It starts at the root and visits all the nodes at level 1, then all the nodes at level 2, and so on.

## Contributors
This project was created by:

- [Solomon Kassa](https://github.com/Solomonkassa)
- [Endesew Bantayehu](https://github.com/EndesewB)
