#Binary trees

##What are binary trees?
A binary tree is a type of data structure in which each node can have at most two child nodes, that are known as the left child and the right child. Each node of the tree consists of data and pointers to the left and right child.

![Binary tree](https://www.geeksforgeeks.org/wp-content/uploads/binary-tree-to-DLL.png)

##Concepts and definitions

| Concept | Definition |
| ----------- | ----------- |
| Root node | The first node in a binary tree |
| Child node | A node that has a parent node |
| Parent node | A node that has one or two child nodes |
| Leaf node | A node that has no child node |
| Full binary tree | All nodes are filled, with only leaves remaining |
| Complete binary tree | All nodes filled save for those in the final row |
| Balanced binary tree | A complete tree where the final row can have a difference of one level |

###Properties of binary trees
-A binary tree allows for a maximum of two children per node.
-The maximum number of edges between the root and a leaf node determines the height of a binary tree.
-In a binary tree, there can only be as many leaf nodes as internal nodes plus one.

**In the mandatory part of this project, we only worked with basic binary trees.**

##First task: New node.
Prototype `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
In this task we created a binary tree node. In which *parent* is a pointer to the parent node of the node to create and *value* is the value to put in the new node.
The node that we created doesn't have any child.
The function returns a pointer to the new node, or NULL if it fails (when malloc fails to allocate memory).

##Second task: Insert left.
Prototype `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
In this task we created a function that inserts a node as the left child of another node. In which *parent* is a pointer to the parent node of the node to create and *value* is the value to put in the new node.
The node that we created could only have a child if *parent* already has a left child and the new node must take its place, and the old left-child will be set as the new left-child of the new node.
The function returns a pointer to the new node or NULL if it fails.

##Third task: Insert right.
Prototype `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
In this task we created a function that inserts a node as the right child of another node. In which *parent* is a pointer to the parent node of the node to create and *value* iis the value to put in the new node.
The node that we created could only have a child if *parent* already has a right child and the new node must take its place, and the old right-child will be set as the new right-child of the new node.
The function returns a pointer to the new node or NULL if it fails.

##Fourth task: Delete
Prototype `void binary_tree_delete(binary_tree_t *tree);`
In this task we created a function that deletes an entire binary tree. In which *tree* is a pointer to the root of the tree to delete.

##Fifth task: Is leaf
Prototype `int binary_tree_is_leaf(const binary_tree_t *node);`
In this task we created a function that checks if a node is leaf. In which *node* is a pointer to the node to check.
The function returns 1 if *node* is a leaf, otherwise 0.

##Sixth task: Is root
Prototype `int binary_tree_is_root(const binary_tree_t *node);`
In this task we created a function that checks if a given node is a root. In which *node* is a pointer to the node to check.
The function returns 1 if *node* is a leaf, otherwise 0.

##Seventh task: Pre-order traversal.
Prototype `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
In this task we have to write a function that goes through a binary tree using a pre-order traversal. Where *tree* is a pointer to the root node of the tree to traverse and *func* is a pointer to a function to call for each node.
The function first prints the root and then its left-child, then their left-child and afterwards their right-child, then it prints the right-child of the root and their left-child and afterwards their right-child.
